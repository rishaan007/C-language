#include <stdio.h>
int fact(int n) {
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}
int main() {
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("The factorial is %d", fact(num));
    return 0;
}