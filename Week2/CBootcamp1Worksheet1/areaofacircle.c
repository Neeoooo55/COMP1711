#include <stdio.h>

int main() {
    float radius;
    float pi = 3.14159265358979323846;

    printf("Enter the radius of the cirle: \n");
    scanf("%f", &radius);

    float area;
    area =  pi * radius * radius;

    printf("The area of the cirlce is: %f\n", area);

    return 0;
}