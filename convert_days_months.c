#include <stdio.h>
#include <math.h>
int main() {
    int days, months, k;

    printf("Enter number of days:\n");
    scanf("%d", &days);

        months = days/30;
        k = days % 30;

    printf("The number of days converted to months and days is %d, %d", months, k);
    return 0;
}