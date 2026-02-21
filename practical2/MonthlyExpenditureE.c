/*Print monthly expenditure
Practical 2, Part 2(e)
Yukta Singh Rajbanshi*/

#include <stdio.h>
int main()
{
    float foodExpenses;
    float leisureExpenses;
    float clothesExpenses;
    float travelExpenses;
    float totalSpent;

    const int ACCOMMODATION = 500;

    printf("Enter food expenses: ");
    scanf("%f",&foodExpenses);

    printf("\nEnter leisure expenses: ");
    scanf("%f",&leisureExpenses);

    printf("\nEnter clothes expenses: ");
    scanf("%f",&clothesExpenses);

    printf("\nEnter travel expenses: ");
    scanf("%f",&travelExpenses);

    totalSpent = foodExpenses + leisureExpenses + clothesExpenses + ACCOMMODATION + travelExpenses;

    printf("\nThe total expensiture this month including £500 as a fixed accommodation expense was £.%.2f\n\n",totalSpent);

    return 0;
}