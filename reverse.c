#include <stdio.h>
#include <math.h>
int main() {
    int n,rev=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int k=n;
    while(k>0) {
        int digit=k%10;
        rev=(rev*10)+digit;
        k=k/10;
    }
    printf("The reversed number is %d",rev);
    return 0;
}