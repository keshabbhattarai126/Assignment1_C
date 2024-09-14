//WAP to calculate area of cylinder.
#include<stdio.h>
#include<math.h>

# define pi 3.14159
int main()
{
    float radius,height,area,volume;
    printf("Enter radius of cylinder");
    scanf("%f",&radius);
    printf("\nEnter height of cylinder");
    scanf("%f",&height);

    area=pi*pow(radius,2);
    volume=pi*pow(radius,2)*height;
    printf("\nThe area of cylinder is %1.2f",area);
    printf("\nThe volume of cylinder is %1.2f",volume);

    return 0;

}