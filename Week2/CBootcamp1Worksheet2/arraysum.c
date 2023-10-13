#include <stdio.h>

int main() {
    int array [5] = {1,2,3,4,5};
    int count = 0;
    int i;

    for (i = 0; i < 5; i++) {
        count = count + array[i];
    }
    
    printf("%d\n", count);

    return 0;
}