#include <stdio.h>

int main() {
    int value = 0;

    while (value != -1) {
        printf ("Enter a value: "); 
        scanf ("%d", &value);

        if (value < 100 && value > 0) {
            printf("The value is within the range of 0 to 100.\n");
        } else {
            printf("The value is not within the range of 0 to 100.\n");
        }
    }

    printf("The program has been terminated.\n");

    return 0;
}