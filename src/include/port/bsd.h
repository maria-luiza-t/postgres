#define USE_POSIX_TIME

#if defined(__i386__)
#define NEED_I386_TAS_ASM
#define HAS_TEST_AND_SET
#endif

#if defined(__sparc__)
#define NEED_SPARC_TAS_ASM
#define HAS_TEST_AND_SET
#endif

#if defined(__vax__)
#define NEED_VAX_TAS_ASM
#define HAS_TEST_AND_SET
#endif

#if defined(__ns32k__)
#define NEED_NS32K_TAS_ASM
#define HAS_TEST_AND_SET
#endif

#if defined(__m68k__)
#define HAS_TEST_AND_SET
#endif

#if defined(__arm32__)
#define HAS_TEST_AND_SET
#endif

#if defined(__mips__)
/* #	undef HAS_TEST_AND_SET */
#endif

#if defined(__powerpc__)
#define HAS_TEST_AND_SET
#endif

#if defined(__powerpc__)
typedef unsigned int slock_t;
#else
typedef unsigned char slock_t;
#endif
