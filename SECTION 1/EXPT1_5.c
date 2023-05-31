/*: Write a program that takes the radius of a circle and displays its area and perimeter.*/
#include "stdio.h"
#include "math.h"
#define pi 3.14 /*macros directives*/
void main()
{
    float radius, area, perimeter;
    printf("Please! Enter the radius of circle\n");
    scanf("%f", &radius);
    area = pi * pow(radius, 2);//pow() function declared in <math.h> c library
    //area = pi*radius*radius;
    perimeter = 2 * pi * radius;
    printf("area of the circle is %g\n", area);
    printf("perimeter of the circle is %g\n", perimeter);
}
