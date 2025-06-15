#include <stdio.h>
#include <math.h>
int main() {
    int a,b,hcf;

    printf("Enter the value of a and b:\n");
    scanf("%d %d",&a,&b);

    int temp;

    while(b!=0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    printf("HCF of a and b is:%d ",a);
    return 0;
}