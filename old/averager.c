#include <stdio.h>
#include <stdarg.h>

double averager(int n, ...) {
    va_list valist;
    va_start(valist, n);
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += va_arg(valist, int);
    }
    va_end(valist);
    return sum / n;
}

int main() {
    printf("averager of 1,2,3,4 is %f\n", averager(4, 1,2,3,4));
    printf("averager of 5,6,7,8 is %f\n", averager(4, 5,6,7,8));
    return 0;
}