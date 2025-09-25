/*
Name:peter
Reg:CT100/G/26164/25
desc:volume of a cylinder
*/
#include<stdio.h>

int main()
{
float radius,height,volume,π,area;
printf("enter radius :");
scanf("%f",  &radius);

printf("enter height : ");
scanf("%f",  &height);

volume=3.142*radius*radius*height;
area=2*3.142*radius*radius+2*3.142*radius*height;

return 0;
}
