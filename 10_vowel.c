/*
10. Write a Program to check if a character is a vowel
*/
#include<stdio.h>
int main()
{
    char character;
    printf("Enter any character\n");
    scanf("%c",&character);
    if(character=='A'||character=='a'||character=='E'||character=='e'||
    character=='I'||character=='i'||character=='O'||character=='o'||
    character=='U'||character=='u'){
        printf("Character is vowel");
    }else{
        printf("Character is not vowel");
    }
}