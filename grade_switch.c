#include <stdio.h>
int main() {
    int marks;

    printf("Enter the marks:\n");
    scanf("%d", &marks);

    if(marks>100||marks<0){
        printf("Invalid Input");
        return 1;
    }
    switch(marks/10)
    {
        case 10:
        case 9:
        printf("Grade: 0\n");
        break;
        case 8:
        printf("Garde: E\n");
        break;
        case 7:
        printf("Garde: A\n");
        break;
        case 6:
        printf("Garde: B\n");
        break;
        case 5:
        printf("Garde: C\n");
        break;
        case 4:
        printf("Garde: D\n");
        break;
        default:
        printf("Garde: F\n");
    }
        return 0;
}