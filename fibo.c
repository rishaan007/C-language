#include <stdio.h>
#include <math.h>
int main() {
    int n, next, f1=0, f2=1;
    printf("Enter the number of terms:\n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        printf("%d ", f1);
        next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
    return 0;
}