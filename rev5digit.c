#include <stdio.h>
#include <math.h>
int main() {
    int n, rev=0;

    printf("Enter a 5-digit number:\n");
    scanf("%d", &n);

    while(n!=0) {
        int digit = n % 10;
        rev = (rev*10)+digit;
        n=n/10;
    }

    printf("The reverse of the 5-digit number is: %d ", rev);
    return 0;
}