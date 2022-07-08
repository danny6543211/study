#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int bStrToNum(char *str);
char *numToBstr(int num);
void revStr(char *str);

int main(int argc, char *argv[]) {
    // if (argc != 3) {
    //     printf("error1");
    //     return 1;
    // }
    char *str1 = "10";
    char *str2 = "11";

    printf("       str1 = %s (bin)\n",str1);
    printf("       str2 = %d (dec)\n",bStrToNum(str1));
    printf("       str1 = %s (bin)\n",str2);
    printf("       str2 = %d (dec)\n",bStrToNum(str2));
    
    printf("str1 & str2 = %s (bin)\n", numToBstr(bStrToNum(str1)&bStrToNum(str2)));
    printf("str1 | str2 = %s (bin)\n", numToBstr(bStrToNum(str1)|bStrToNum(str2)));
    printf("str1 ^ str2 = %s (bin)\n", numToBstr(bStrToNum(str1)^bStrToNum(str2)));


    return 0;
}

int bStrToNum(char *str) {
    int len = strlen(str);
    int sum = 0;
    for (int index = 0; index < len; index++) {
        if (str[index] != '0' && str[index] != '1') {
            return -1;
        }
        if (str[index] == '1')
            sum += pow(2, len - index - 1);
    }
    return sum;
}

char *numToBstr(int num) {
    char *str = (char *)malloc(sizeof(char) * 16);
    int count = 0;
    while (num != 0) {
        if (num & 1) {
            str[count] = '1';
        } else {
            str[count] = '0';
        }
        num = num >> 1;
        count++;
    }
    str[count] = '\0';
    revStr(str);
    return str;
}

void revStr(char *str) {
    int len = strlen(str);
    for (int i = 0; i<(len / 2); i++) {
        int temp = str[i];
        str[i] = str[len - 1];
        str[len -  1] = temp;
    }
}