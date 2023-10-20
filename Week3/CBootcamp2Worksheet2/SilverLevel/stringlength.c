#include <stdio.h>

int stringLength (char str[100]) {
    int i, length = 0;

    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    return length;

}

int main() {
    char str[100];
    int length = 0;

    printf ("Enter a string:\n");
    scanf ("%s", str);

    length = stringLength(str);

    printf("The length of the string is: %d\n", length);

    return 0;
}