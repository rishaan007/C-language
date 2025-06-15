#include <stdio.h>
#include <math.h>
int main() {
    int n,fact,sign;

    printf("Enter the number of terms:\n");
    scanf("%d",&n);

    float sum=0.0;

    for(int i=1;i<=n;i++) {

        fact = 1;

        for(int j=1;j<=2*i-1;j++) {

            fact = fact *j;
        }

        sum = sum + sign*(1.0/fact);
        sign=sign*(-1);
        
    }
        printf("The sum of the alternating factorial series is: %.2f", sum);
        return 0;
}