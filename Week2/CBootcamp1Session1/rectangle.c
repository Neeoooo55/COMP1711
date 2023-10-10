#include <stdio.h>

int main() {
    float width;
    float height;
    float area;

    printf("Enter the height of the rectangle: ");
    scanf("%f", &height);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    area = height * width;

    printf("The area of the rectangle is: %f\n", area);

    return 0;
}