/*: Write a program to swap two numbers*/
#include"stdio.h"
#include"conio.h"
void main()
{  int Num1,Num2,Temp;//temp means temporary number
    printf("Enter 1st number\n");
    scanf("%d",&Num1);
    printf("Enter 2st number\n");
    scanf("%d",&Num2);
    Temp=Num1;
    Num1=Num2;
    Num2=Temp;
    printf("After swapping two numbers,\n1st number is %d\n2nd number is %d",Num1,Num2);
}

