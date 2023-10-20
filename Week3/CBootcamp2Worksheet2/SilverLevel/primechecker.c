#include <stdio.h>

int isPrime (int num) {
    int flag = 1;

    for (int i = 2; i <= (num / 2); i++) {
        if (num % i == 0) {
            flag = 0;
            break;
        }
    }

    return flag;

}

int main() {
    int num = 0, prime = 0;

    printf ("Enter a number:\n");
    scanf ("%d", &num);

    prime = isPrime(num);

    if (prime == 1) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }

    return 0;
}