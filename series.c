#include <stdio.h>
#include <math.h>
int main() {
    int n;
    float sum=0.0;
    printf("Enter the number of terms:\n");
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        sum = sum + 1.0/i;
    }
    printf("Sum of the series is: %.4f",sum);
    return 0;
}