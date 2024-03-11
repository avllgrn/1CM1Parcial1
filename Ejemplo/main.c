#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sumaComplejos(void);
void restaComplejos(void);
void multiplicaComplejos(void);
void DivideComplejos(void);

int main(void){

    sumaComplejos();
    restaComplejos();
    multiplicaComplejos();
    DivideComplejos();

    return 0;
}

void sumaComplejos(void){
    float r1,i1,r2,i2,r3,i3;

    //1. Pide datos
    printf("\n\nSuma de complejos\n\n");
    printf("Ingresa r1 ");scanf("%f",&r1);
    printf("Ingresa i1 ");scanf("%f",&i1);
    printf("Ingresa r2 ");scanf("%f",&r2);
    printf("Ingresa i2 ");scanf("%f",&i2);

    //2. Calcula formula(s)
    r3 = r1+r2;
    i3 = i1+i2;

    printf("\n\n");
    printf("C1\t= %f + %fi\n",r1,i1);
    printf("C2\t= %f + %fi\n",r2,i2);
    printf("C1 + C2 = %f + %fi\n",r3,i3);
}
void restaComplejos(void){
    float r1,i1,r2,i2,r3,i3;

    //1. Pide datos
    printf("\n\nResta de complejos\n\n");
    printf("Ingresa r1 ");scanf("%f",&r1);
    printf("Ingresa i1 ");scanf("%f",&i1);
    printf("Ingresa r2 ");scanf("%f",&r2);
    printf("Ingresa i2 ");scanf("%f",&i2);

    //2. Calcula formula(s)
    r3 = r1-r2;
    i3 = i1-i2;

    printf("\n\n");
    printf("C1\t= %f + %fi\n",r1,i1);
    printf("C2\t= %f + %fi\n",r2,i2);
    printf("C1 - C2 = %f + %fi\n",r3,i3);
}
void multiplicaComplejos(void){
    float r1,i1,r2,i2,r3,i3;

    //1. Pide datos
    printf("\n\nMultiplicacion de complejos\n\n");
    printf("Ingresa r1 ");scanf("%f",&r1);
    printf("Ingresa i1 ");scanf("%f",&i1);
    printf("Ingresa r2 ");scanf("%f",&r2);
    printf("Ingresa i2 ");scanf("%f",&i2);

    //2. Calcula formula(s)
    r3 = r1*r2 - i1*i2;
    i3 = r1*i2 + r2*i1;

    printf("\n\n");
    printf("C1\t= %f + %fi\n",r1,i1);
    printf("C2\t= %f + %fi\n",r2,i2);
    printf("C1 * C2 = %f + %fi\n",r3,i3);
}
void DivideComplejos(void){
    float r1,i1,r2,i2,r3,i3;

    //1. Pide datos
    printf("\n\nDivision de complejos\n\n");
    printf("Ingresa r1 ");scanf("%f",&r1);
    printf("Ingresa i1 ");scanf("%f",&i1);
    printf("Ingresa r2 ");scanf("%f",&r2);
    printf("Ingresa i2 ");scanf("%f",&i2);

    //2. Calcula formula(s)
    r3 = (r1*r2 + i1*i2) / (pow(r2,2) + pow(i2,2));
    i3 = (r2*i1 - r1*i2) / (pow(r2,2) + pow(i2,2));

    printf("\n\n");
    printf("C1\t= %f + %fi\n",r1,i1);
    printf("C2\t= %f + %fi\n",r2,i2);
    printf("C1 / C2 = %f + %fi\n",r3,i3);
}
