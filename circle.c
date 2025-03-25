#include<stdio.h>
#define pi 3.145
#define AREA_OF_CIRCLE(r)(pi*r*r)
#define SURFACE_AREA_OF_CYLINDER(r,h)(2*pi*r*(r+h))
int main()
{
float r,h,area,surface_area;
printf("Enter the radius:");
scanf("%f",&r);
printf("Enter the height of the cylinder:");
scanf("%f",&h);
area=AREA_OF_CIRCLE(r);
surface_area=SURFACE_AREA_OF_CYLINDER(r,h);
printf("Area of circle is:%.2f",area);
printf("\nSurface area of cylinder is:%.2f",surface_area);
return 0;
}

