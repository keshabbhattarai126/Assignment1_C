/*WAP to calculate area of Triangle*/
#include<stdio.h>
int main()
{
    float base,height,area;
    printf("Enter base of triangle");
    scanf("%f",&base);
    printf("\nEnter height of triangle");
    scanf("%f",&height);

    area=0.5*base*height;
    printf("The area of triangle is %1.2f",area);
   // return 0;

}