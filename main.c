#include<stdio.h>
#define max(x, y) x > y ? x : y

int main() {
    printf("%d", max(max(2, 3), 2));
    return 0;
}