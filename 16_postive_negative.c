/*
16. Check Positive, Negative, or Zero
Description: Write a program that reads an integer 
and checks whether it is positive, negative, or zero using nested if statements.
*/

#include<stdio.h>
int main()
{
    int number;
    printf("enter any number");
    scanf("%d",&number);
    if(number>0){
        printf("%d is positive number",number);
    }else if(number==0){
        printf("%d is zero",number);
    }else{
        printf("%d is negative number",number);
    } 
}