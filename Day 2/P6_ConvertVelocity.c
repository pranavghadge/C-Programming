//The velocity of an object is given in km/hr. W.A.P to convert the given velocity from km/hr to m/sec
#include<stdio.h>

main(){
    float velk,velm;
    printf("Enter velocity in Km/hr\t");
    scanf("%f",&velk);
    velm = velk * 5/18;
    printf("Equivalent velocity is %f m/sec",velm);
}