#include <stdio.h>
#include "utils.h"

int main()
{
    char *filename = "squares.dat";
    FILE *file = open_file(filename, "w");

    int square;
    int num_lines = 10;

    printf("Enter a number: ");
    scanf("%d", &num_lines);

    for (int i = 1; i < num_lines; i++)
    {
        square = i * i;
        fprintf(file, "%d\n", square);
    }

    fclose(file);
    return 0;
}