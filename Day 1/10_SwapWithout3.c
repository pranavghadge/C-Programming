// Program that swap two numbers without using a third number
#include<stdio.h>

main(){
    int number1,number2;
    printf("Enter numbers\t");
    scanf("%d %d",&number1,&number2);
    printf("Numbers before swap %d %d \n",number1,number2);
    number2 = number1 + number2;
    number1 = number2 - number1;
    number2 = number2 - number1;
    printf("Numbers after swap %d %d \n",number1,number2);
}