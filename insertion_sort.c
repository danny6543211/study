// insertion_sort
#include<stdio.h>

int* insertion_sort(int *num, int n);

int main() {
    
    int num[] = {6,4,7,9,8,6,5,3,1,2};
    bubble_sort(num, sizeof(num) / sizeof(int));

    for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
        printf("%d ", num[i]);
    }
    
    return 0;
}

int* insertion_sort(int *num, int n) {
    
}