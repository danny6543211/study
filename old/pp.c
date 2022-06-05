#include<stdio.h>
#include<string.h>
// 指向指針的指針才能交換指針
void swap(char **a, char **b);
int main() {
    char *a = "hello";
    char *b = "world";

    swap(&a, &b);
    
    puts(a);
    puts(b);

    return 0;
}

void swap(char **a, char **b) {
    char *t = *a;
    *a = *b;
    *b = t;
}