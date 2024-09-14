/*
13. Write a program to calculate tax based on annual income:
Up to 10,000: No tax

10,001 to 50,000: 10% tax

50,001 to 100,000: 20% tax

Above 100,000: 30% tax
*/
#include<stdio.h>
int main()
{
    int income;
    float tax;
    printf("Enter your income\n");
    scanf("%d",&income);

    if(income>=10001 && income<=50000){
        tax=0.1*income;
        printf("Tax is %f",tax);
    }else if(income>=50001 && income<=100000){
        tax=0.2*income;
        printf("Tax is %f",tax);
    }else if(income>100000){
        tax=0.3*income;
        printf("Tax is %f",tax);
    }else{
        printf("No tax");
    }

}