#pragma once
/*

#ifdef PLATFORM_WINDOWS
#ifdef BUILD_DLL
#define GC_API __declspec(dllexport)
#else
#define GC_API __declspec(dllimport)
#endif // BUILD_DLL
#else
#error This frame work only supports Windows.
#endif

#ifdef DEBUG
#define GC_ENABLE_ASSERT
#endif

#ifdef GC_ENABLE_ASSERT
#define GC_ASSERT(x, ...) { if(!(x)) { CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak();} }
#define GC_CORE_ASSERT(x, ...) { if(!(x)) { CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
#define GC_ASSERT(x, ...)
#define GC_CORE_ASSERT(x, ...)
#endif
*/

#define BIT(x) (1 << x)