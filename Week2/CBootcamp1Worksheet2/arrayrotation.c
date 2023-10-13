#include <stdio.h>

int main() {
    char array [5] = {1,2,3,4,5};
    int temp = array[4];

    int i;
    for (i = 4; i > -1; i--) {
        array[i] = array[i - 1];
    }

    array[0] = temp;

    int j;
    for (j = 0; j < 5; j++) {
        printf("%d", array[j]);
    }
    

    return 0;
}