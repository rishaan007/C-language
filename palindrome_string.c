#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string:\n");
    scanf("%s", &str);

    int len=strlen(str), flag=1;
    for(int i=0;i<len/2;i++) {
        if(str[i] != str[len-i-1]){
            flag=0;
            break;
        }
    }
    if(flag) {
        printf("Palindrome\n");
    }
    else {
        printf("Not Palindrome\n");
    }
    return 0;
}