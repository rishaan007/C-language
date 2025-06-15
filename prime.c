#include <stdio.h>
#include <math.h>
int main() {
    int n,count;
    printf("Enter a number\n");
    scanf("%d", &n);
    if(n%2!=0) {
        count++;
    }
    if(count == 2) {
        printf("%d is a prime number",n);
    }
    else {
        printf("%d is not a prime number",n);
    }
    return 0;
}