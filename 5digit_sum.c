#include <stdio.h>
#include <math.h>
int main() {
    int n,sum=0;

    printf("Enter a 5-digit number:\n");
    scanf("%d",&n);

    while(n!=0) {
        int digit = n%10;
        sum = sum + digit;
        n=n/10;
    }
    printf("The sum of the 5-digit number is: %d ", sum);
    return 0;
}