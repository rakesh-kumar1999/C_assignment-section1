/*Write a program to swap two numbers without using a third variable.*/
#include"stdio.h"
void main()
{  int Num1,Num2;
    printf("Enter 1st number\n");
    scanf("%d",&Num1);
    printf("Enter 2st number\n");
    scanf("%d",&Num2);
    Num1=Num1+Num2;
    Num2=Num1-Num2;
    Num1=Num1-Num2;
    printf("After swapping two numbers without using a third variable,\nThe 1st number is %d \nThe 2nd number is %d",Num1,Num2);
}

