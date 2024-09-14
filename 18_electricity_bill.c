/*
18: Electricity Bill Calculation

Description: Write a program to calculate the electricity bill based on the following conditions:

If units <= 100: rate is 5 per unit
If units <= 200: rate is 10 per unit for units above 100
If units > 200: rate is 15 per unit for units above 200
*/

#include<stdio.h>

int main()
{
    int units;
    float bill = 0;

    printf("Enter the number of units consumed\n");
    scanf("%d", &units);

    if(units <= 100) {
        bill = units * 5;
    } else if(units <= 200) {
        bill = 100 * 5 + (units - 100) * 10;
    } else {
        bill = 100 * 5 + 100 * 10 + (units - 200) * 15;
    }

    printf("Total electricity bill is: %.2f\n",bill);

    return 0;
}
