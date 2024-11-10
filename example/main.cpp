// meta.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <meta/macro.hpp>
#include <unordered_map>

// 生成一个逗号
// (由COMMON_IF_NOT_END调用)
#define COMMON_IF_TRUE ,

// 生成一个逗号, 直到__VA_ARGS__末尾不生成
#define COMMON_IF_NOT_END(i, ...) META_NOT_IF(META_INDEX_IS_END(i, __VA_ARGS__), COMMON_IF_TRUE)

// 从字段声明中提取名称(第二步)
// 解析:
// 这里x是([MAYBE] DEFAULT) NAME
// META_IS_PAREN判断是不是括号, 如果有括号就去除括号, 如果没有直接返回
#define FIELD_EXTRACT_NAME_I(x) META_IF_ELSE(META_IS_PAREN(x), META_EMPTY x, x)

// 从字段声明中提取默认值(第二步)
// 解析:
// 这里x是([MAYBE] DEFAULT) NAME
// 如果有括号, 就通过META_EXTRACT_PAREN_UNPACK获取括号内容, 如果没有就返回{}
#define FIELD_EXTRACT_DEFAULT_I(x) META_IF_ELSE(META_IS_PAREN(x), META_EXTRACT_PAREN_UNPACK(x), {})

// 从字段声明中提取名称
// (TYPE)([MAYBE] DEFAULT) NAME -> NAME
#define FIELD_EXTRACT_NAME(field) FIELD_EXTRACT_NAME_I(META_EMPTY field)
// 从字段声明中提取默认值
// (TYPE) NAME -> {}
// (TYPE)(DEFAULT) NAME -> DEFAULT
#define FIELD_EXTRACT_DEFAULT(field) FIELD_EXTRACT_DEFAULT_I(META_EMPTY field)
// 从字段声明中提取类型
// (TYPE)([MAYBE] DEFAULT) NAME -> TYPE
#define FIELD_EXTRACT_TYPE(field) META_EXTRACT_PAREN_UNPACK(field)

// 将未加工过的字段声明, 转为字段声明
// (TYPE)([MAYBE] DEFAULT) NAME -> TYPE NAME
#define FIELD_TO_DECL(field) FIELD_EXTRACT_TYPE(field) FIELD_EXTRACT_NAME(field)


#define FIELD_TO_CONST_REF_DECL_I(x) const x&
// 假设这里x是(float) kk，所以后面展开就是 FIELD_TO_CONST_REF_DECL_I (float) kk
// FIELD_TO_CONST_REF_DECL_I (float)会被识别成宏调用，把float作为参数传入
// 于是就得到了const float&的结果
// 然后在加上后面的kk，就组成了const float& kk
#define FIELD_TO_CONST_REF_DECL(x) FIELD_TO_CONST_REF_DECL_I x

// 生成构造函数的参数声明, 以及默认参数
// 参数 i: 类似for的索引
// 参数 __VA_ARGS__: 未加工的字段声明列表
// (CTOR_ARGS_DECL_WITH_DEFAULT的META_FOR循环代码)
#define CTOR_ARGS_DECL_WITH_DEFAULT_IMPL(i, ...) \
	FIELD_TO_CONST_REF_DECL(META_INDEX(i, __VA_ARGS__)) = {} COMMON_IF_NOT_END(i, __VA_ARGS__)

// 字段声明转构造函数字段初始化(第二步)
// 参数 field_name: 字段名称
#define FIELD_TO_CTOR_INIT_I(field_name) field_name(field_name)
// 字段声明转构造函数字段初始化(第一步)
// 参数 field: 未加工的字段
// (由CTOR_INIT_LIST_IMPL调用)
#define FIELD_TO_CTOR_INIT(field) FIELD_TO_CTOR_INIT_I(META_EMPTY_PACK(field))

// 生成构造函数的初始化列表
// 参数 i: 类似for的索引
// 参数 __VA_ARGS__: 未加工的字段声明列表
// (CTOR_INIT_LIST的META_FOR循环代码)
#define CTOR_INIT_LIST_IMPL(i, ...) \
	FIELD_TO_CTOR_INIT(META_INDEX(i, __VA_ARGS__)) COMMON_IF_NOT_END(i, __VA_ARGS__)

// 生成元数据结构体内的字段(第二步)
// 参数 struct_name: 结构体名称
// 参数 i: 类似for的索引
// 参数 field_name: 字段名称
#define DEF_META_FIELD_DATA_IMPL_II(struct_name, i, field_name) \
	static auto value(struct_name& obj) -> decltype(auto) { return (obj.field_name); } \
	constexpr static const char* name() { return META_TO_STR(field_name); }

// 生成元数据结构体内的字段(第一步)
// 把数据加工一下后传给DEF_META_FIELD_DATA_IMPL_II
// 参数 struct_name: 结构体名称
// 参数 i: 类似for的索引
// 参数 field: 未加工的字段
// (由DEF_META_FIELD_DATA_IMPL调用)
#define DEF_META_FIELD_DATA_IMPL_I(struct_name, i, field) DEF_META_FIELD_DATA_IMPL_II(struct_name, i, META_EMPTY_PACK(field))

// 生成单个字段的元数据结构体
// META_INDEX(0, __VA_ARGS__)用于获取之前传入的结构体名称
// META_INDEX(META_INC(i), __VA_ARGS__)获取索引对应的字段声明, 注意这里需要把索引+1, 因为第一个是结构体名称
// 参数 i: 类似for的索引
// 参数 __VA_ARGS__: 第一个参数是结构体名称, 余下的是未加工的字段声明列表
// (META_FIELD_DATAS的META_FOR循环代码)
#define DEF_META_FIELD_DATA_IMPL(i, ...) \
	template<> struct MetaFieldData<i> { \
		DEF_META_FIELD_DATA_IMPL_I(META_INDEX(0, __VA_ARGS__), i, META_INDEX(META_INC(i), __VA_ARGS__)) \
	};

// 字段声明转字段定义
// (TYPE) NAME -> TYPE NAME;
// (FIELDS_DECL的META_FOR_EACH循环代码)
#define FIELDS_TO_DECL(x) META_UNPACK(x);

// 生成构造函数的初始化列表
// 参数 __VA_ARGS__: 未加工的字段声明列表
#define CTOR_INIT_LIST(...) META_FOR(CTOR_INIT_LIST_IMPL, 0, META_COUNT(__VA_ARGS__), __VA_ARGS__)
// 生成构造函数的参数声明和默认参数
// 参数 __VA_ARGS__: 未加工的字段声明列表
#define CTOR_ARGS_DECL_WITH_DEFAULT(...) META_FOR(CTOR_ARGS_DECL_WITH_DEFAULT_IMPL, 0, META_COUNT(__VA_ARGS__), __VA_ARGS__)
// 生成成员变量的声明
// 参数 __VA_ARGS__: 未加工的字段声明列表
#define FIELDS_DECL(...) META_FOR_EACH(FIELDS_TO_DECL, __VA_ARGS__)
// 生成字段(成员变量)元数据
// 注意这里把name传入了META_FOR的参数列表
// 参数 name: 结构体名称
// 参数 __VA_ARGS__: 未加工的字段声明列表
#define META_FIELD_DATAS(name, ...) META_FOR(DEF_META_FIELD_DATA_IMPL, 0, META_COUNT(__VA_ARGS__), name, __VA_ARGS__)

// 数据定义的主宏
#define DEF(name, type, ...) \
    struct name : public Msg<type> { \
		name(CTOR_ARGS_DECL_WITH_DEFAULT(__VA_ARGS__)) \
			: CTOR_INIT_LIST(__VA_ARGS__) {} \
		FIELDS_DECL(__VA_ARGS__) \
		template<size_t index> struct MetaFieldData; \
		constexpr static inline size_t kMetaFieldCount = META_COUNT(__VA_ARGS__); \
		META_FIELD_DATAS(name, __VA_ARGS__) \
	};

template<class T, class Func>
void ForeachMetaFieldData(T&& obj, Func&& cb) {
	using DecayT = std::decay_t<T>;

	[&] <size_t... I>(std::index_sequence<I...>) {
		(cb(typename DecayT::template MetaFieldData<I>{}), ...);
	}(std::make_index_sequence<DecayT::kMetaFieldCount>{});
}

enum class PKK {
	kPPS
};

template<auto P>
struct Msg {

};


DEF(SDD, PKK::kPPS, (float) sss, (int) kkp, (char) ssd)

int main()
{
	//SDD sss{ 1.0f, 122 };
	//ForeachMetaFieldData(sss, [&](auto field_data) {
	//	std::cout << "Name:" << field_data.name() << " - Value:" << field_data.value(sss) << std::endl;
	//	});
}