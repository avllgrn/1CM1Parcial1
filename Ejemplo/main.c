#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculaDiscriminante(float a, float b, float c);
float calculax1(float a, float b, float c);
float calculax2(float a, float b, float c);

int main(void){
    float a,b,c,disc,x1,x2;

    //1. Pide datos
    printf("\n\nRaices de una ecuacion de segundo grado (con formula general)\n\n");
    printf("Ingresa a ");
    scanf("%f",&a);
    printf("Ingresa b ");
    scanf("%f",&b);
    printf("Ingresa c ");
    scanf("%f",&c);

    x1 = calculax1(a,b,c);//Se manda calcular x1 en una funcion
    x2 = calculax2(a,b,c);//Se manda calcular x2 en otra funcion

    //3. Muestra resultado(s)
    printf("\n\n");
    printf("x1 = %f\n",x1);
    printf("x2 = %f\n",x2);

    return 0;
}
float calculaDiscriminante(float a, float b, float c){
    //2. Calcula formula(s)
    return pow(b,2) - 4*a*c;
}
float calculax1(float a, float b, float c){
    //2. Calcula formula(s)
    return (-b+sqrt(calculaDiscriminante(a,b,c))) / (2*a);
}
float calculax2(float a, float b, float c){
    //2. Calcula formula(s)
    return (-b-sqrt(calculaDiscriminante(a,b,c))) / (2*a);
}
