#include<stdio.h>
#include<windows.h>
int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("error");
        return 1;
    }
    FILE *fp = fopen("push.bat", "w");
    fprintf(fp,"git add .\n");
    fprintf(fp,"git commit -m %s\n", argv[1]);
    fprintf(fp,"git push\n");
    system("C:\\Users\\Danny\\Desktop\\study\\push.bat");
    return 0;
}