// Program that adds two numbers entered by user
#include<stdio.h>

main(){
    int number1,number2,number3;
    printf("Enter numbers\t");
    scanf("%d %d",&number1,&number2);
    number3 = number1 + number2;
    printf("The sum is %d",number3);
}