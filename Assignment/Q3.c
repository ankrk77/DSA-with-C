//number is prime or not.
#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);

    if (num <= 1) { 
        printf("Your number is not Prime\n");
        return 0;
    }

    bool isPrime = true;

    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        printf("Your number is Prime\n");
    else
        printf("Your number is not Prime\n");

    return 0;
}
