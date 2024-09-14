/*
12. Write a program to classify a person’s weight status based on their BMI. The categories are:
  bmi = weight / (height * height);

  Underweight: BMI < 18.5

  Normal weight: 18.5 ≤ BMI < 24.9

  Overweight: 25 ≤ BMI < 29.9

  Obese: BMI ≥ 30
*/
#include<stdio.h>
int main()
{
    float bmi,height,weight;
    printf("Enter you height\n");
    scanf("%d",&height);
    printf("Enter you weight\n");
    scanf("%d",&weight);
    
    bmi=weight/(height*height);

    if(bmi<18.5){
        printf("You are underweight");
    }else if(bmi>=18.5 && bmi<24.9){
        printf("You have normal weight");
    }else if(bmi>=25 && bmi<29.9){
        printf("You are overweight");
    }else{
        printf("invalid measurements. Try again");
    }

}

