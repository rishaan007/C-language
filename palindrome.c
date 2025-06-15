#include <stdio.h>
#include <math.h>
int main() {
    int n,k,rev=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    k=n;
    while(k>0) {
        int digit=k%10;
        rev = (rev * 10)+digit;
        k=k/10;
    }
    if(n==rev) {
        printf("%d is a Palindrome number", n);
    }
    else {
        printf("%d is not Palindrome number", n);
    }
    return 0;
}