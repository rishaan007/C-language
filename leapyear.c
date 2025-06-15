#include <stdio.h>
#include <math.h>
int main() {
    int year;
    printf("Enter the year:\n");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0)||year%400==0) {
        printf("Leap year");
    }
    else {
        printf("Not a Leap year");
    }
    return 0;
}