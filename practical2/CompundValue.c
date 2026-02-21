#include <stdio.h>
int main()
{
    double monthlySaving;
    double account = 0;
    double monthlyInterestRate = 0.05/12;

    printf("Enter your monthly saving amount: ");
    scanf("%lf", &monthlySaving);

    for (int i = 1; i<=6; i++)
    {
        account = (account + monthlySaving) * (1 + monthlyInterestRate);
    }
    printf("Account values after 6 months: %.2lf\n", account);
 return 0;   
}