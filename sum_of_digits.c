#include <stdio.h>
#include <math.h>
int main() {
    int n,sum=0;
    printf("Enter digits to calculate its sum\n");
    scanf("%d",&n);
    while(n>0){
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    printf("Sum is %d",sum);
    return 0;
}