#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void print_array(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\n");
}

int main(void) {
    /* 포인터 기초 */
    int x = 10;
    int *p = &x;
    printf("x = %d, &x = %p, *p = %d\n", x, (void *)p, *p);

    /* swap 함수 */
    int a = 5, b = 7;
    printf("Before swap: a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("After  swap: a=%d, b=%d\n", a, b);

    /* 동적 메모리 할당 */
    int n = 5;
    int *arr = malloc(n * sizeof(int));
    if (!arr) { perror("malloc"); return 1; }

    for (int i = 0; i < n; i++) arr[i] = (i + 1) * 10;
    printf("Dynamic array: ");
    print_array(arr, n);

    free(arr);
    return 0;
}
