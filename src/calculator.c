#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
double div_safe(int a, int b) {
    if (b == 0) {
        fprintf(stderr, "Error: division by zero\n");
        return 0;
    }
    return (double)a / b;
}

int main(void) {
    int a = 10, b = 3;
    printf("%d + %d = %d\n", a, b, add(a, b));
    printf("%d - %d = %d\n", a, b, sub(a, b));
    printf("%d * %d = %d\n", a, b, mul(a, b));
    printf("%d / %d = %.4f\n", a, b, div_safe(a, b));
    return 0;
}
