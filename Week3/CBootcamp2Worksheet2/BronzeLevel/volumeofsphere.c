#include <stdio.h>

float sphereVolume (float radius) {
    float answer;
    float pi = 3.14159265358979323846;
    answer = (4/3) * pi * (radius * radius * radius);
    return answer;
}

int main() {
    float radius;
    float volume;

    printf ("Enter the radius of the sphere:\n");
    scanf ("%f", &radius);

    volume = sphereVolume(radius);

    printf("The volume of the sphere is: %f\n", volume);

    return 0;
}