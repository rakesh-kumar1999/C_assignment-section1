/* Write a program to enter the temperature in degree Celsius and display it in Fahrenheit
and vice-versa. [NOTE: C = (5.0/9.0) × (F - 32)]*/
#include "stdio.h"
void main()
{
    float celsius, Fahrenheit;
    int num;
    printf("please! Enter your Choice.\n\npress 1 to convert temp. from celsius to fahrenheit\npress 2 to convert temp. from fahrenheit to celsius\n");
    scanf("%d", &num);
    if (num == 1 || num == 2)
    {

        if (num == 1)
        {
            printf("Please! Enter the temperature (celsius):");
            scanf("%f", &celsius);
            Fahrenheit = (9 * celsius) / 5 + 32;
            printf("%g degree celsius temperature is %g fahrenheit", celsius, Fahrenheit);
        }
        else
        {
            printf("Please! Enter the temperature (fahrenheit):");
            scanf("%f", &Fahrenheit);
            celsius = (5.0 / 9.0) * (Fahrenheit - 32);
            printf("%g fahrenheit temperature is %g degree celsius", Fahrenheit, celsius);
        }
    }
    else
        printf("You have entered invalid choice");
}
