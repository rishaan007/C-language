#include <stdio.h>
int power (int base, int exp) {
    if(exp==0)
    return 1;
    else
    return base*power(base,exp-1);
}
int main() {
    int b,e;
    printf("Enter the base and exponent:\n");
    scanf("%d %d", &b, &e);
    printf("Result = %d\n", power(b,e));
    return 0;
}