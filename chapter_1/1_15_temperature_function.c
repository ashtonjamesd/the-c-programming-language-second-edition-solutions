#include <stdio.h>

float convert_to_celsius(float fahr) {
    return (5.0 / 9.0) * (fahr - 32.0);
}

int main()
{
    float fahr, celsius;
    float lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("Fahrenheit to Celsius\n");
    while (fahr <= upper) {
        celsius = convert_to_celsius(fahr);
        printf("%3.0f %6.1f\n", celsius, fahr);
        fahr = fahr + step;
    }
}