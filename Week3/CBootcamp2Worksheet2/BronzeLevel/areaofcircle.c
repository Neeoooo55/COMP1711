#include <stdio.h>

float circleArea (float radius) {
    float answer;
    float pi = 3.14159265358979323846;
    answer = pi * radius * radius;
    return answer;
}

int main() {
    float radius;
    float area;

    printf ("Enter the radius of the circle:\n");
    scanf ("%f", &radius);

    area = circleArea(radius);

    printf("The area of the cirlce is: %f\n", area);

    return 0;
}