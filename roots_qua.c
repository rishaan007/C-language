#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c,x,d,x1,x2;
    printf("Enter the values of a, b and c for the equation ax^2 + bx + c :\n");
    scanf("%f %f %f", &a, &b, &c);

    d=(b*b)-4*a*c;

    if (a==0&&b==0) {
        printf("No Solution");
    }
    else if(a==0&&b!=0) {
        x= - (c/b);
        printf("Only one real root: %.2f", x);
    }
    else if(d<0) {
        printf("There is no real root");
    }
    else if(d==0){
        x1=-b/(2*a);
        printf("One real root:%d", x1);
    }
    else {
        x1= (-b + sqrt(d))/(2*a);
        x2= (-b - sqrt(d))/(2*a);
        printf("The two real roots are %f and %f", x1, x2);
    }
    return 0;
}