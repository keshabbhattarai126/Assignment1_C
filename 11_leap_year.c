/*
11. WAP to Print whether the year is a leap year or not.
*/
#include<stdio.h>
int main()
{
    int year;
    printf("Enter year ");
    scanf("%d",&year);

if(year%4==0 && year%100!=100){
    printf("%d is leap year",year);
}else{
    printf("%d is not leap year",year);
}
}