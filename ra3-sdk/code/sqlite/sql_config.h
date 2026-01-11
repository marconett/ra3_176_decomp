#if defined(__LP64__) || defined(_LP64) || defined(__x86_64__) || defined(__aarch64__)
#define SQLITE_PTR_SZ 8
#else
#define SQLITE_PTR_SZ 4
#endif
