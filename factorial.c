#include <stdio.h>
#include <math.h>
int main() {
    int n,i,fact=1;
    printf("Enter a number\n");
    scanf("%d",&n);
        for(i=1;i<=n;i++) {
            fact=fact*i;
        }
    printf("Factorial of %d is %d", n,fact);
    return 0;
}