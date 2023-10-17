#include <stdio.h>

int main() {
    int temp;

    printf ("Enter the tempurature: "); 
    scanf ("%d", &temp); 

    if (temp <= 40 && temp >= -10) { 
        printf("The tempurature of %d degrees Celcius is within the range of -10 to 40 degrees Celsius\n", temp); 
    }

    return 0;
}