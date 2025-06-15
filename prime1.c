#include <stdio.h>
#include <math.h>
int main() {
    int n, count=0, i;

    printf("Enter a number:\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++) {
        if(n%i==0) {
            count ++;
        }
    }
    if(count==2) {
        printf("Prime number");
    }
    else {
        printf("Not a Prime number");
    }
    return 0;
}