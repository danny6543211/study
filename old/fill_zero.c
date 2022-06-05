// 給兩個二進制字符串把短的補零補的跟長的一樣
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void fill_zero(char **a, char **b);

int main() {
    char *a = "0";
    char *b = "11";
    fill_zero(&a, &b);
    
    puts(a);
    puts(b);

    return 0;
}

void fill_zero(char **a, char **b) {
    
    // 新的字符串的大小
    int a_len = strlen(*a);
    int b_len = strlen(*b);
    int new_len = a_len > b_len ? a_len : b_len;
    char *new = (char*)malloc(sizeof(char) * (new_len + 1));
    
    // 比大小
    // 字符串a補零
    if (a_len < new_len) {
        // 把補完零的先存到new
        for (int i = 0; i < new_len - a_len; i++) {
            new[i] = '0';
        }
        strcpy(new + new_len - a_len, *a);
        // 改a指針的地址改到new
        *a = new;
    }
}
