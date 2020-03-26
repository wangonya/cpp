#include <cstdio>

int absolute_value(int x) {
    int result = x;
    if (x<0) result=x*-1;
    return result;
}

int main() {
    printf("absolute %d == %d\n", -10, absolute_value(-10));
    printf("absolute %d == %d\n", 10, absolute_value(10));
}