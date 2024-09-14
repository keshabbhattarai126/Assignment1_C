#include<stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in degreee Celsius");
    scanf("%f",&celsius);
    fahrenheit=(celsius*9/5)+32;

    printf("%f celsius is %f in fahrenheit",celsius,fahrenheit);
    return 0;
}