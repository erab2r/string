// Given a string S. Determine whether S is Palindrome or not
#include<stdio.h>
#include<string.h>

int main(){
    char s[1001];
    scanf("%s",&s);
    int len = strlen(s);
    int isPalindrome = 1;
    for(int i = 0; i < len/2; i++){
        if(s[i] != s[len - 1 - i]){
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;

}