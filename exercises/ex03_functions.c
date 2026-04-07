/*
 * 실습 03: 함수
 * TODO: 아래 함수들을 구현하세요.
 */
#include <stdio.h>

/* TODO: 팩토리얼을 계산하는 함수 (재귀 사용) */
int factorial(int n) {
    /* 구현하세요 */
    return 0;
}

/* TODO: 피보나치 수열의 n번째 값을 반환하는 함수 */
int fibonacci(int n) {
    /* 구현하세요 */
    return 0;
}

int main(void) {
    for (int i = 0; i <= 10; i++) {
        printf("%d! = %d\n", i, factorial(i));
    }
    printf("\n");
    for (int i = 0; i <= 10; i++) {
        printf("fib(%d) = %d\n", i, fibonacci(i));
    }
    return 0;
}
