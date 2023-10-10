#include <stdio.h>
int main() {
    char name[15]; // Defines a character string variable called name that can hold up to 15 letters

    printf("Hello, please enter your name: ");
    scanf("%s", name); // Lets us read data from the keyboard, %s (string format) and stores it in variable name
    printf("Your name is %s\n", name); // Prints the phrase in quotes and substitues in my name for the %s format specifier

    return 0;
}