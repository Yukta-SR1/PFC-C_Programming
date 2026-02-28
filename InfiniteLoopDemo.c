#include <stdio.h>
int main() {
    int i = 10;  
    while (i >= 0) {
        printf("%d ", i);
        i--;
    }
    printf("\nLoop completed safely!\n");
    return 0;
}

/* Why does the unsigned version create an infinite loop? 
= The unsigned version creates an infinite loop because unsigned integers can’t be negative.
 When decremented past zero, they wrap around to a huge positive value, so the condition i >= 0 is always true. */
