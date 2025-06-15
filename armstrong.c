#include <stdio.h>
#include <math.h>
int main() {
    int n,k,sum=0;
    printf("Enter a number\n");
    scanf("%d", &n);
    k=n;
    while(k>0){
        int digit=k%10;
        sum=sum+digit*digit*digit;
        k=k/10;
    }
    if(sum==n) {
        printf("%d is a Armstrong number", n);
    }
    else {
        printf("%d is not a Armstrong number", n);
    }
    return 0;
}