#include <stdio.h>

// Function to swap values
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of y: ");
    scanf("%d", &y);

    printf("\nBefore swapping: x = %d, y = %d\n", x, y);

    // Function call with address of x and y
    swap(&x, &y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}
