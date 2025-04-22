// Given a string S. Print the origin string after replacing the following:

// Replace every comma character ',' with a space character.
// Replace every capital character in S with its respective small character and Vice Versa.

#include<stdio.h>
#include<string.h>

int main(){
    char s[100005];
    scanf("%s",s);

    for(int i = 0; s[i] != '\0';i++){
        if(s[i] == ','){
            printf(" ");
        }
        else if(s[i] >= 'A' && s[i] <='Z'){
            printf("%c",s[i] + 32);
        } 
        else if(s[i] >= 'a' && s[i] <= 'z'){
            printf("%c",s[i] - 32);
        }
        else{
            printf("%c", s[i]);
        }
    }
    printf("\n");
    return 0;
}