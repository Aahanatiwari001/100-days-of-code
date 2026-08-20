#include <stdio.h>

int main() {
    float costPrice, sellingPrice, amount, percentage;

    printf("Enter cost price: ");
    scanf("%f", &costPrice);

    printf("Enter selling price: ");
    scanf("%f", &sellingPrice);

    if (costPrice <= 0) {
        printf("Cost price must be greater than zero.");
    } else if (sellingPrice > costPrice) {
        amount = sellingPrice - costPrice;
        percentage = (amount / costPrice) * 100;

        printf("Profit = %.2f\n", amount);
        printf("Profit Percentage = %.2f%%", percentage);
    } else if (sellingPrice < costPrice) {
        amount = costPrice - sellingPrice;
        percentage = (amount / costPrice) * 100;

        printf("Loss = %.2f\n", amount);
        printf("Loss Percentage = %.2f%%", percentage);
    } else {
        printf("No profit, no loss.");
    }

    return 0;
}
