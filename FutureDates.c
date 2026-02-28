#include <stdio.h>

int main() {
    int today, daysAfter, futureDay;
    char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    printf("Enter today's day (0=Sunday, 1=Monday, ..., 6=Saturday): ");
    if (scanf("%d", &today) != 1 || today < 0 || today > 6) {
        printf("Error: Invalid input!\n");
        return 1;
    }

    printf("Enter number of days after today: ");
    if (scanf("%d", &daysAfter) != 1 || daysAfter < 0) {
        printf("Error: Invalid input!\n");
        return 1;
    }

    futureDay = (today + daysAfter) % 7;

    printf("Today is %s and the future day is %s\n", days[today], days[futureDay]);

    return 0;
}