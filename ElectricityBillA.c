/* Electricity bill 
Practical 3, Part 2 
Yukta Singh Rajbanshi*/ 

#include <stdio.h>
#include <stdbool.h>

int main()
{
//define variables for previous and current readings, day and month
int previousMetre, currentMetre, day, month;

//prompt user to enter previous and current readings, day and month       
//separated by a space or return; 

    printf("Enter previous meter reading, present meter reading, day when the reading was taken,and the month when the reading was taken:\n ");
   
/* defensive programming note: Always validate user input before using it in calculations or conditions
Check if scanf successfully read all values*/
    if (scanf("%d %d %d %d", &previousMetre, &currentMetre, &day, &month) != 4) {
        printf("Error: Invalid input format\n");
        return 1;
    }

//display previous metre, current metre, day and month 
    printf("%d %d %d %d\n", previousMetre, currentMetre, day, month);

//current metre reading within range 0-9999 
 if (currentMetre < 0 || currentMetre > 9999)
 {
        printf("Error: current meter reading out of range \n");  
 }

/*previous metre reading within range 0-9999    
previous not greater than present*/

if (previousMetre > currentMetre || previousMetre < 0 || previousMetre > 9999)
{
    printf("Error: previous meter reading should not be greater than the present one");
}

//electricity used not more than 1000 
if ((currentMetre - previousMetre) > 1000)
    printf("Error: electricity used is more than 1000 units\n");


//month in range 1-12 
if (month < 1 || month > 12)
    printf("Error: month out of range\n");

/*days in month must be correct (Jan, March etc)  
days in month must be correct (Apr, June etc) 
days in month must be correct (Feb – assuming 29 days)*/
bool validDay = true;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: // 31-day months
            if (day < 1 || day > 31) validDay = false;
            break;
        case 4: case 6: case 9: case 11: // 30-day months
            if (day < 1 || day > 30) validDay = false;
            break;
        case 2: // February (assuming 29 days)
            if (day < 1 || day > 29) validDay = false;
            break;
}
if (!validDay)
    printf("Error: day out of range for given month\n");

return 0;

}