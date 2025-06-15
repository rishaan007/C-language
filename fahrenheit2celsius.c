#include <stdio.h>
#include <math.h>
int main() {
    float f,c;
    printf("Enter the temperature in Fahrenheit:\n");
    scanf("%f",&f);

    c=(f-32)*(5.0/9.0);

    printf("Fahrenheit to Celsius temperature conversion is: %.1f", c);
    return 0;
}