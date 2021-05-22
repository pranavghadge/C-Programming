// Area of Triangle whose sides are a,b,c
#include<stdio.h>
#include<math.h>

main(){
    float a,b,c,s,area;
    printf("Enter the sides of a triangle\t");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle is %6.2f sq.units",area);
}