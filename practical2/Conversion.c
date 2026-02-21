#include <stdio.h>
int main()
{
    double celsius, fahrenheit;

    printf("\nEnter temperature in Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = (9.0/5.0) * celsius + 32;

    printf("Temperature in Fahrenheit: %.2lf \n", fahrenheit);
    
    return 0;
}