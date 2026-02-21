#include <stdio.h>
#include <stdlib.h>  

const int ACCOMMODATION = 500;

/* Previously scanf was called without checking its return value,
   and negative numbers were never caught. This function handles both issues. */

float getPositiveFloat(const char *prompt) {
    float value;
    int result;

    printf("%s", prompt);

    /* scanf returns the number of items successfully read.
       If it returns anything other than 1, the input was invalid. */
    result = scanf(" %f", &value);

    if (result != 1) {
        /* Input was not a number - clear the buffer and exit */
        printf("Error: Invalid input. Please enter a number more than or equals to 0. Do not include alphabets or special characters!\n");
        exit(1);
    }

    // Validate that the value is non-negative.
    if (value < 0) {
        printf("Error: Expense cannot be negative. Please enter a number more than or equals to 0. Do not include alphabets or special characters!\n", value);
        exit(1);
    }

    return value;
}

int main() {

    float foodExpenses;
    float leisureExpenses;
    float clothesExpenses;
    float travelExpenses;
    float totalSpent;

    printf("\nMonthly Expenditure Calculator \n\n");

    foodExpenses    = getPositiveFloat(" Enter food expenses:    ");
    leisureExpenses = getPositiveFloat(" Enter leisure expenses: ");
    clothesExpenses = getPositiveFloat(" Enter clothes expenses: ");
    travelExpenses  = getPositiveFloat(" Enter travel expenses:  ");

    printf(" Accommodation (fixed constant): £%d\n", ACCOMMODATION);

    totalSpent = foodExpenses + leisureExpenses + clothesExpenses
               + ACCOMMODATION + travelExpenses;

    printf("\nThe total expenditure this month was £%.2f\n\n", totalSpent);

    return 0;
}