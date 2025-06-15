#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(int i=1;i<=10;i++) {
        int multiplier=n*i;
        printf("%d x %d = %d\n",n,i,multiplier);
    }
    return 0;
}