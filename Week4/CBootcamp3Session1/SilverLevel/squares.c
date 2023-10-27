#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int main()
{
    char* filename = "sqaures.dat";
    FILE *file = open_file(filename, "r");

    int buffer_size = 100;
    char line_buffer[buffer_size];
    float mean;
    int count = 0;
    
    while (fgets(line_buffer, buffer_size, file) != NULL) {
        count++;
        mean = mean + atof(line_buffer);
    }

    mean = mean / count;
    printf("The average is: %f", mean);

    fclose(file);
    return 0;
}