#include<stdio.h>
#include<stdlib.h>
void test();

int main() {
    atexit(test);
    printf("123\n");

    return 0;
}
void test() {
    printf("hello world\n");
}