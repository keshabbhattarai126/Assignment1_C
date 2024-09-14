/*
15. Write a program to determine if a person can rent a car based on their age 
and driving license status. A person must be at least 21 years old and 
have a valid driving license.
*/
#include<stdio.h>
int main()
{
    char license_status;
    int age;
    printf("Enter you age\n");
    scanf("%d",&age);
    printf("Do you have license? (y/n)\n");
    scanf(" %c",&license_status);

    if(age>=21 && license_status=='y'){
       printf("You can rent a car"); 
    }else{
         printf("You cannot rent a car");

    }
   
}