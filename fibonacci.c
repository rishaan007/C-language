#include <stdio.h>
#include <math.h>
int main() {
    int n,term1=0,term2=1,next,i;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        printf("%d", term1);
        next=term1+term2;
        term1=term2;
        term2=next;
    }
    return 0;
}