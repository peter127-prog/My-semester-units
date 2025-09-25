/*
Name: Peter
Reg: CT100/G/26164/25
Desc: Volume and Surface Area of a Cylinder
*/
#include <stdio.h>
#define PI 3.142  // Define constant for Pi

int main()
{
    float radius, height, volume, area;

    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("Enter height: ");
    scanf("%f", &height);

    volume = PI * radius * radius * height;
    area   = 2 * PI * radius * radius + 2 * PI * radius * height;

    printf("\nVolume of the cylinder: %.2f\n", volume);
    printf("Surface area of the cylinder: %.2f\n", area);

    return 0;
}
