#include <stdio.h>

union Sample {
    int i;
    float f;
};

int main() {
    union Sample s;

    s.i = 10;
    printf("Integer: %d\n", s.i);

    s.f = 5.5;
    printf("Float: %.2f\n", s.f);

    return 0;
}

