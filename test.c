#include <assert.h>

#include "ctest.h"

int add_two(int n) {
    return n + 2;
}

Test(add_two_five) {
    assert(add_two(5) == 7);
}

Test(add_two_three) {
    assert(add_two(3) == 5);
}
