#include <stdio.h>
int main ()
{
    long currentPopulation = 312032486;
    long secondsPerYear = 365 * 24 * 60 * 60; 

    long birthsPerYear = secondsPerYear/7;
    long deathsPerYear = secondsPerYear/13;
    long immigrantsPerYear = secondsPerYear/45;

    long netChangePerYear = birthsPerYear - deathsPerYear + immigrantsPerYear;

    printf("\nU.S. Population for Each of the Next Five Years: \n \n");

    for (int year = 1; year <=5; year++)
    {
        currentPopulation += (long)netChangePerYear;
        printf("Year %d population: %ld\n", year, currentPopulation);
    }
        printf("\n");

    return 0;
}