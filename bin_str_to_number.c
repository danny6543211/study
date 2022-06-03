// 二進制字符串轉數字
#include<stdio.h>
#include<string.h>
#include<math.h>

int main() {
    
    char *b_str = "01001001";
    int b_str_len = strlen(b_str);
    int sum = 0;

    // 從後面掃回來
    for (int i = b_str_len - 1, power = 0; i >= 0; i--, power++) {
        if (b_str[i] == '1')
            sum += pow(2, power);
    }

    printf("BIM:01001001\nDEC:%d\n", sum);

    return 0;
}