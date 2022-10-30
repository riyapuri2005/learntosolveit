/***
 *
 * Temperature Conversion Program, Celsius to Fahrenheit!
 *
 * print Fahrenheit-Celsius table for fahr = 0,20 ... 300
 *
 ***/

#include <stdio.h>

int main(void) {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("C     F\n\n");
    celsius = upper;

    while (celsius >= lower) {
        fahr = (float)((9.0 / 5.0) * celsius + 32.0);
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius - step;
    }

    return 0;
}
