/*9. Write a program to check voting eligibility based on age and country. 
For simplicity, assume the voting age is 18 for all countries
*/
#include<stdio.h>
int main(){
int age;
printf("Enter you age\n");
scanf("%d",&age);
if(age>=18){
    printf("You are eligible to vote");
}else{
    printf("You are not eligible to vote");
}

}
