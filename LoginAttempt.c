//Exercise 3: Secure Login Attempt System

#include <stdio.h>
#define MAX_ATTEMPTS 3
#define CORRECT_PIN 1234

int main() {
    int pin;
    int attempts = 0;

    while (attempts < MAX_ATTEMPTS) {
        printf("Enter PIN: ");
        if (scanf("%d", &pin) != 1) {
            printf("Error: Invalid input, numbers only.\n");
            while (getchar() != '\n'); // clear buffer
            continue; // do not count this as an attempt
        }

        if (pin == CORRECT_PIN) {
            printf("Access Granted!\n");
            return 0;
        } else {
            attempts++;
            if (attempts < MAX_ATTEMPTS) {
                printf("Wrong PIN. %d attempt(s) left.\n", MAX_ATTEMPTS - attempts);
            } else {
                printf("Access Denied. Account Locked.\n");
            }
        }
    }

    return 0;
}
