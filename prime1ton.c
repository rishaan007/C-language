#include <stdio.h>
#include <math.h>
int main() {
    int n,i,j,count;

    printf("Enter the number of terms upto which you want to print the prime numbers:\n");
    scanf("%d", &n);

    for(i=2;i<=n;i++) {

        count=0;

        for(j=2;j<=i/2;j++){

            if(i%j==0) {
                count++;
            }
        }

        if(count==0) {
            printf(" %d\n",i);
        }
    }
    return 0;
}