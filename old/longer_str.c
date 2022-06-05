// 加長字符串
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void longer_str(char **str, int n);

int main() {
    char *test = "1";
    longer_str(&test, 3);
    test[0] = '1';
    test[1] = '2';
    test[2] = '\0';

    puts(test);

    return 0;
}

void longer_str(char **str, int n) {
    *str = (char*)malloc(sizeof(char) * n);
}