#ifndef CTEST_H
#define CTEST_H

#include <stddef.h>

#define MAX_TESTS 1000

#define Test(test_ident) \
    void test_ident(void); \
    __attribute__((constructor)) \
    void register_##test_ident() { \
        test_registry[tests_registered++] = (TestData) { \
            .test_fn = test_ident, \
            .name = #test_ident, \
        }; \
    } \
    void test_ident(void)

typedef struct {
    const char *name;
    void (*test_fn) (void);
} TestData;

extern size_t tests_registered;
extern TestData test_registry[MAX_TESTS];

#endif
