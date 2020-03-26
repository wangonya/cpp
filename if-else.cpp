#include <cstdio>

int step_function(int x) {
    int result = x;
    return x;
}

int main() {
    int x = 0;
    if (x>0) printf("+ve");
    else if (x<0) printf("-ve");
    else printf("0");
    int y = step_function(x);
    printf("step: %d", y);
}

