#include <stdio.h>

extern void hello_mls(); // Rust 함수가 있다고 알려줌

int main() {
    printf("🚀 [C] 프로그램을 시작합니다.\n");
    hello_mls(); // Rust 함수 호출
    return 0;
}