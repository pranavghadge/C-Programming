// Find Area and Circumference of circle with radius r
#include<stdio.h>

main(){
    float r,cir,area;
    printf("Enter the radius of circle\t");
    scanf("%f",&r);
    cir = 2* 22.0/7*r;
    area = 22.0/7*r*r;
    printf("Circumference of a circle is %6.2f\n",cir);
    printf("Area of circle is %6.2f\n",area);
}