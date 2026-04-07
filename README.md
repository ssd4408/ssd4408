# C 언어 실습 환경

## 디렉토리 구조

```
.
├── Makefile          # 빌드 자동화
├── src/              # 예제 소스 파일
│   ├── hello.c       # Hello World
│   ├── calculator.c  # 사칙연산 함수
│   └── pointers.c    # 포인터 & 동적 메모리
└── exercises/        # 실습 문제 (TODO 채워넣기)
    ├── ex01_variables.c
    ├── ex02_loops.c
    └── ex03_functions.c
```

## 빌드 & 실행

```bash
# 전체 빌드
make

# 특정 파일 실행
make run TARGET=hello
make run TARGET=calculator
make run TARGET=pointers

# 빌드 파일 삭제
make clean
```

## 단일 파일 직접 컴파일

```bash
gcc -Wall -Wextra -g -o hello src/hello.c
./hello
```

## GDB 디버깅

```bash
gcc -g -o hello src/hello.c
gdb ./hello
# (gdb) run
# (gdb) break main
# (gdb) next / step / print x
```
