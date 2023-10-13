#include <stdio.h>

int main() {
    char array [5] = {1,2,3,2,5};
    int count = 0;

    int i;
    int j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (array[i] == array[j]) {
                printf("test");
            }
        }
    }

    printf("%d\n", count);
    return 0;
}