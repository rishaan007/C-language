#include <stdio.h>
#include <math.h>
int main() {
    int a,b,gcd,lcm,temp;
    printf("Enter two numbers");
    scanf("%d %d", &a,&b);
    int x=a, y=b;
    while (b!=0) {
        temp = b;
        b = a %b;
        a =temp;
    }
    gcd = a;
    lcm=(x*y)/gcd;
    printf("GCD = %d, LCM =%d\n", gcd, lcm);
    return 0;
}