/*
17.: Find the Oldest Person

Description: Write a program to determine the oldest among three people
 based on their ages using nested if statements.
*/
#include<stdio.h>
int main()
{
    int age_person1, age_person2, age_person3;
    printf("Enter age of first person\n");
    scanf("%d",&age_person1);
    printf("Enter age of seocnd person\n");
    scanf("%d",&age_person2);
    printf("Enter age of third person\n");
    scanf("%d",&age_person3);

    if(age_person1>age_person2 && age_person1>age_person3){
        printf("First person is the oldest");
    }else if(age_person2>age_person1 && age_person2>age_person3){
        printf("Second person is the oldest");
    }else{
        printf("Third person is the oldest");
    }

}
