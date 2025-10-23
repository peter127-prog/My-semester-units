/*
name:peter thagana
reg:CT100/G/26164/25
desc:electric bill calculation
*/

#include <stdio.h>

double calculateElectricBill(double units) {
    double bill;

    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) {
        bill = 100 * 10 + (units - 100) * 15;
    } else {
        bill = 100 * 10 + 100 * 15 + (units - 200) * 20;
    }

    return bill;
}

int main() {
    double units;
    printf("Enter the number of units consumed: ");
    scanf("%lf", &units);

    double total = calculateElectricBill(units);

    printf("For %.0f units consumed, the total bill is KSh. %.2f\n", units, total);

    return 0;
}