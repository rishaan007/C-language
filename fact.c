#include <stdio.h>
#include <math.h>
int main() {
    int n, fact;
    printf("Enter a number:\n");
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        fact=fact*i;
    }
    printf("Factorial is %d", fact);
    return 0;
}