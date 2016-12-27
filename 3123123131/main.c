#include <stdio.h>
#include <string.h>
int main() {
    char str1[255];
    char str2[255];
    int i = 0;
    int x;

    scanf("%s", str1);
    scanf("%s", str2);
    while(i<strlen(str1)) {
        strstr(str1, str2);
    }
    printf("%s", p);
}