#include <stdio.h>
#include <math.h>
int main() {
    int n;

    printf("Enter the number of elements of the matrix:\n");
    scanf("%d",&n);

    int a[n][n],b[n][n],sum[n][n],i,j;

    printf("Enter the elements of first %d x %d matrix:\n",n,n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of second %d x %d matrix:\n",n,n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &b[i][j]);
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum:\n");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf("%d", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}