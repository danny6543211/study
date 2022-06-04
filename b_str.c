// 對兩個二進制字符串使用四種位操作然後打印
#include<stdio.h>
#include<string.h>

char *not(char *);
char *and(char *, char *);

int main() {
    
    char test1[] = "1001";
    char test2[] = "1101";
    
    return 0;
}

char *not(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '0') {
            str[i] = '1';
            continue;
        } else if (str[i] == '1') {
            str[i] = '0';
            continue;
        }
    }
    return str;
}

char *and(char *str1, char *str2) {
    
}