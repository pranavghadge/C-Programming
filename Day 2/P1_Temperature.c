// Convert the temperature given in Fahrenheit to Celsius
#include<stdio.h>

main(){
    float f,c;
    printf("Enter temperature in Fahrenheit\t");
    scanf("%f",&f);
    c = 5.0/9.0 * (f-32);
    printf("Temperature in Celsius is %6.2f",c);
}