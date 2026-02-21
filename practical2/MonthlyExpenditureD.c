/*Print monthly expenditure
Practical 2, Part 2(d)
Yukta Singh Rajbanshi*/

#include <stdio.h>
int main()
{
    float foodExpenses;
    float leisureExpenses;
    float clothesExpenses;
    float accommodationExpenses;
    float travelExpenses;
    float totalSpent;

    printf("Enter food expenses: ");
    scanf("%f",&foodExpenses);

    printf("\nEnter leisure expenses: ");
    scanf("%f",&leisureExpenses);

    printf("\nEnter clothes expenses: ");
    scanf("%f",&clothesExpenses);

    printf("\nEnter accommodation expenses: ");
    scanf("%f",&accommodationExpenses);

    printf("\nEnter travel expenses: ");
    scanf("%f",&travelExpenses);

    totalSpent = foodExpenses + leisureExpenses + clothesExpenses + accommodationExpenses + travelExpenses;

    printf("\nThe total expensiture this month was Rs.%.2f\n\n",totalSpent);

    return 0;
}