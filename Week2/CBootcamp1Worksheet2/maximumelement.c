#include <stdio.h>

int main() {
    int array [5] = {1,2,3,4,5};

    int size = sizeof(array);
    int firstsize = sizeof(array[0]);

    int arraylength = (size / firstsize) - 1;

    printf("The lest element in the array is: %d\n", array[arraylength]);


    return 0;
}