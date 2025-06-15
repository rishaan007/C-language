#include <stdio.h>
#include <math.h>
int main() {
    int a,b,temp;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the valueb of b\n");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping the value of a and b is %d, %d",a,b);
    return 0;
}