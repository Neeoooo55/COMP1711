#include <stdio.h>

int main() {
    int age;

    printf("Hello, please enter your age: ");
    scanf("%d", &age); // & is the "address of" operator - scanf needs to know the memory address of the variable. &age is the address of variable age.
    printf("Your age is %d\n", age); // \n is the "newline" character

    return 0;
}