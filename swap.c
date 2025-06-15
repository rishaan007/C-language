#include <stdio.h>
int main() {
    int a,b,temp;

    printf("Enter the value of a:\n");
    scanf("%d", &a);
    printf("Enter the value of b:\n");
    scanf("%d", &b);

    temp = a;
    a = b;
    b= temp;

    printf("After swapping: Value of a is %d and Value of b is %d", a,b);
    return 0;
}