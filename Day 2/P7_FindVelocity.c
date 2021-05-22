// Object goes under uniformly acclerated motion. The intial velocity(u) of an object and the accelaration(a) are known.W.A.P to find Velocity(v) of the object after the time(t) 
#include<stdio.h>

main(){
    float u,v,a,t;
    printf("Enter the value of initial velocity in m/s\t");
    scanf("%f",&u);
    printf("Enter the amount of acceleration\t");
    scanf("%f",&a);
    printf("Enter the time in sec\t");
    scanf("%f",&t);
    v= u+a*t;
    printf("Velocity after %4.2f sec is %4.2f m/s",t,v);
}