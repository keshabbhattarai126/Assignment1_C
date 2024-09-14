/*
14. Calculate the Total Price with Discount
Task: Write a program to calculate the total price after applying a discount based on the quantity purchased:

1-10 items: 5% discount

11-50 items: 10% discount

More than 50 items: 15% discount
*/
#include<stdio.h>

int main()
{
    int quantity;
    float price_per_item, total_price, discount;

    printf("Enter the quantity of items purchased\n");
    scanf("%d", &quantity);

    printf("Enter the price per item\n");
    scanf("%f", &price_per_item);

    total_price = price_per_item * quantity;

    if(quantity >= 1 && quantity <= 10) {
        discount = 0.05 * total_price;
        total_price -= discount;
        printf("Discount is 5%%\n");
    } else if(quantity >= 11 && quantity <= 50) {
        discount = 0.10 * total_price;
        total_price -= discount;
        printf("Discount is 10%%\n");
    } else if(quantity > 50) {
        discount = 0.15 * total_price;
        total_price -= discount;
        printf("Discount is 15%%\n");
    } else {
        printf("No discount applied\n");
    }

    printf("Total price after discount is: %.2f\n", total_price);

    return 0;
}
