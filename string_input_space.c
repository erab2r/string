#include<stdio.h>

int main(){
    char s[10];
    fgets(s,16,stdin);
    printf("%s",s);
    return 0;
}