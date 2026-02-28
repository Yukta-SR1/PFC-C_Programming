#include <stdio.h>
#define MAX_CUSTOMERS 10

int main() {
    int numCustomers;
    int units, totalUnits = 0;
    float bill, totalBill = 0;

    // Ask how many customers
    printf("Enter number of customers to process (1-%d): ", MAX_CUSTOMERS);
    if (scanf("%d", &numCustomers) != 1) {
        printf("Error: Invalid input!\n");
        return 1;
    }

    if (numCustomers < 1 || numCustomers > MAX_CUSTOMERS) {
        printf("Error: Number must be between 1 and %d!\n", MAX_CUSTOMERS);
        return 1;
    }

    // Process each customer
    for (int i = 1; i <= numCustomers; i++) {
        printf("\nCustomer %d:\n", i);

        // Validate units input
        printf("Enter electricity units used: ");
        if (scanf("%d", &units) != 1 || units < 0) {
            printf("Error: Invalid units!\n");
            while (getchar() != '\n'); // clear buffer
            i--; // retry same customer
            continue;
        }

        // Calculate bill (example rates)
        if (units <= 100) {
            bill = units * 5.0; // Rs. 5 per unit
        } else if (units <= 200) {
            bill = (100 * 5.0) + (units - 100) * 7.5;
        } else {
            bill = (100 * 5.0) + (100 * 7.5) + (units - 200) * 10.0;
        }

        printf("Customer %d Bill: Rs. %.2f\n", i, bill);

        // Update totals
        totalUnits += units;
        totalBill += bill;
    }

    // Summary
    printf("\n=== Summary ===\n");
    printf("Total customers processed: %d\n", numCustomers);
    printf("Total units consumed: %d\n", totalUnits);
    printf("Total bill amount: Rs. %.2f\n", totalBill);

    return 0;
}