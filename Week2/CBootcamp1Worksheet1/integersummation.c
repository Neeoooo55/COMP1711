#include <stdio.h>

int main() {
    float a;
    float b;
    float c;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    c = a + b;

    printf("%f + %f = %f\n", a, b, c);

    return 0;
}