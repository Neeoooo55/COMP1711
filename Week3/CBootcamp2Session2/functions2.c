#include <stdio.h>

float sum (float a, float b)
{
    float answer;
    answer = a + b;
    return answer;
}

int main () 
{
    float y = 2.5;
    float z = sum(5.25, y); // calling our new function

    printf ("The sum of 5.25 and %f is %f\n", y, z);
}