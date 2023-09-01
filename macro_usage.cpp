// clang-tidy -checks=cppcoreguidelines-macro-usage macro_usage.cpp

#define C 0
#define F1(x, y) ((a) > (b) ? (a) : (b))
#define F2(...) (__VA_ARGS__)
#define COMMA ,
#define NORETURN [[noreturn]]
#define DEPRECATED attribute((deprecated))
#if LIB_EXPORTS
#define DLLEXPORTS __declspec(dllexport)
#else
#define DLLEXPORTS __declspec(dllimport)
#endif