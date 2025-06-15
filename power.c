#include <stdio.h>
#include <math.h>
int main() {
    int x,y,power=1;
    printf("Enter the value of X:\n");
    scanf("%d",&x);
    printf("Enter the power value of X:\n");
    scanf("%d",&y);
    for(int i=1;i<=y;i++) {
        power=power*x;
    }
    printf("%d to the power %d is %d ",x,y,power);
    return 0;
}