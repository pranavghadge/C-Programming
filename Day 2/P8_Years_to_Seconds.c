// A year approximately consists of 3.156 * 10^7 seconds. W.A.P that accepts agein years and convert it into equivalent number of seconds
#include<stdio.h>

main(){
    int age;
    float age_in_sec;
    printf("How old are you (years)?\t");
    scanf("%d",&age);
    age_in_sec=3.156E7 * age;
    printf("Your age in seconds is %5.2E",age_in_sec);
}