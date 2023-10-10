#include <stdio.h>

int main() {
    float a;
    float b = 3.641;
    float c; // Changed from "int c;"

    a = 2.897;
    c = a + b;

    printf("The sum of adding %f and %f is %f\n", a, b, c); // Changed last format specifier from "%d"
} 