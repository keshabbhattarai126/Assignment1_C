/* WAP to calculate Simple Interest*/
#include<stdio.h>
int main()
{
    float P,T,R,simple_interest;
    printf("Enter Principal amount");
    scanf("%f",&P);
    printf("\nEnter Time duration");
    scanf("%f",&T);
    printf("\nEnter rate of interest");
    scanf("%f",&R);

    simple_interest=(P*T*R)/100;
    printf("\nThe simple interest is %f",simple_interest);
    return 0;


}