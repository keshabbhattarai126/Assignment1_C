#include<stdio.h>
int main()
{
    float sub1,sub2,sub3,sub4,sub5,avg,total,percentage;
    printf("Enter mark of subject 1");
    scanf("%f",&sub1);
    printf("\nEnter mark of subject 2");
    scanf("%f",&sub2);
    printf("\nEnter mark of subject 3");
    scanf("%f",&sub3);
    printf("\nEnter mark of subject 4");
    scanf("%f",&sub4);
    printf("\nEnter mark of subject 5");
    scanf("%f",&sub5);

    total=sub1+sub2+sub3+sub4+sub5;
    avg=total/5;
    percentage=(total/500)*100;

    printf("The total marks is %1.2f, average is %1.2f and percentage is %1.2f",total,avg,percentage);

    return 0;
}