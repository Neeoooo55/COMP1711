#include <stdio.h>

int main() {
    char str[6] = "Hello";
    int i;

    for (i = 5; i > -1; i--) {
        printf("%c", str[i]);
    }
    
    printf("\n");

    return 0;
}