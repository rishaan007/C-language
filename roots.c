#include <stdio.h>
#include <math.h>
int main() {
    float d, a, b, c, root1, root2, real, imag;

    printf("Enter the coefficients a, b & c:\n");
    scanf("%f %f %f", &a,&b,&c);

    d= b*b - 4*a*c;

    if(d>0) {
        root1 = (-b + sqrt(d))/(2*a);
        root2 = (-b - sqrt(d))/(2*a);
        printf("The roots are real and distinct:\n Root 1: %.2f\n Root 2:%.2f",root1,root2);
    } else if(d==0) {
        root1 = -b/(2*a);
        printf("The roots are real and equal\n Root 1: %.2f",root1);
    } else {
        real = -b/(2*a);
        imag = sqrt(-d)/(2*a);
        printf("The roots are complex and imaginary:\n");
        printf("Root 1: %.2f + %.2f", real, imag);
        printf("Root 2: %.2f - %.2f", real, imag);
    }
    return 0;
}