/*Print monthly expenditure
Practical 2, Part 2(c)
Yukta Singh Rajbanshi*/

#include <stdio.h>
int main()
{
    float foodExpenses = 1000.5;
    float leisureExpenses = 550.0;
    float clothesExpenses = 2000.2;
    float accommodationExpenses = 4500.0;
    float travelExpenses = 200.0;
    float totalSpent;

    totalSpent = foodExpenses + leisureExpenses + clothesExpenses + accommodationExpenses + travelExpenses;

    printf("The total expensiture this month was Rs.%.2f\n\n",totalSpent);
    return 0;
}