#include <stdio.h>
#include <math.h>
int main() {
    
    int n;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    int a[n][n],trans[n][n],i,j;

    printf("Enter the elements of the %d x %d matrix:\n",n,n);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            trans[j][i] = a[i][j];
        }
    }
    printf("Transpose of the matrix is:\n");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf("%d", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}