#include<stdio.h>
#include<math.h>
int main()
{
    float P,T,R,compound_interest;
    printf("Enter Principal amount");
    scanf("%f",&P);
    printf("\nEnter Time duration");
    scanf("%f",&T);
    printf("\nEnter rate of interest");
    scanf("%f",&R);

    compound_interest=P*pow((1+R/100),T)-P;
    printf("The compund interest is %1.2f",compound_interest);
    return 0;
}