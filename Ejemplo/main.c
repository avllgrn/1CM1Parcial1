#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sumaDeDosNumeros(void);
void areaPerimetroRectangulo(void);
void areaPerimetroCirculo(void);
void formulaGeneral(void);
void sumaDePuntos(void);
void pendienteDadosPuntos(void);
void distanciaEntrePuntos(void);

int main(void){

    sumaDeDosNumeros();
    areaPerimetroRectangulo();
    areaPerimetroCirculo();
    formulaGeneral();
    sumaDePuntos();
    pendienteDadosPuntos();
    distanciaEntrePuntos();

    return 0;
}

void sumaDeDosNumeros(void){
    float a, b, c;

    //1. Pide datos
    printf("\n\nSuma de dos numeros\n\n");
    printf("Ingresa un numero ");
    scanf("%f",&a);
    printf("Ingresa otro numero ");
    scanf("%f",&b);

    //2. Calcula formula(s)
    c = a + b;

    //3. Muestra resultado(s)
    printf("\n\n");
    printf("%f + %f = %f\n",a, b, c);
}

void areaPerimetroRectangulo(void){
    float b, h, a, p;

    //1. Pide datos
    printf("\n\nArea y perimetro de un rectangulo\n\n");
    printf("Ingresa base de rectangulo ");
    scanf("%f",&b);
    printf("Ingresa altura de rectangulo ");
    scanf("%f",&h);

    //2. Calcula formula(s)
    a = b * h;
    p = 2*b + 2*h;

    //3. Muestra resultado(s)
    printf("\n\n");
    printf("area = %f\n",a);
    printf("perimetro = %f\n",p);
}

void areaPerimetroCirculo(void){
    float r, a, p;

    //1. Pide datos
    printf("\n\nArea y perimetro de un circulo\n\n");
    printf("Ingresa radio de circulo ");
    scanf("%f",&r);

    //2. Calcula formula(s)
    a = M_PI * pow(r,2);
    p = 2 * M_PI * r;

    //3. Muestra resultado(s)
    printf("\n\n");
    printf("area = %f\n",a);
    printf("perimetro = %f\n",p);
}

void formulaGeneral(void){
    float a,b,c,disc,x1,x2;

    //1. Pide datos
    printf("\n\nRaices de una ecuacion de segundo grado (con formula general)\n\n");
    printf("Ingresa a ");
    scanf("%f",&a);
    printf("Ingresa b ");
    scanf("%f",&b);
    printf("Ingresa c ");
    scanf("%f",&c);

    //2. Calcula formula(s)
    disc = pow(b,2)-4*a*c;
    x1 = (-b+sqrt(disc)) / (2*a);
    x2 = (-b-sqrt(disc)) / (2*a);

    //3. Muestra resultado(s)
    printf("\n\n");
    printf("x1 = %f\n",x1);
    printf("x2 = %f\n",x2);
}
void sumaDePuntos(void){
    float x1, y1, x2, y2, x3, y3;

    //1. Pide datos
    printf("\n\nSuma de dos puntos\n\n");
    printf("Ingresa x1 ");
    scanf("%f",&x1);
    printf("Ingresa y1 ");
    scanf("%f",&y1);
    printf("Ingresa x2 ");
    scanf("%f",&x2);
    printf("Ingresa y2 ");
    scanf("%f",&y2);

    //2. Calcula formula(s)
    x3 = x1 + x2;
    y3 = y1 + y2;

    //3. Muestra resultado(s)
    printf("\n\n");
    printf("  P1(%f, %f)\n",x1,y1);
    printf("+ P2(%f, %f)\n",x2,y2);
    printf("= P3(%f, %f)\n",x3,y3);
}
void pendienteDadosPuntos(void){
    float x1, y1, x2, y2, m;

    //1. Pide datos
    printf("\n\Pendiente de recta dados dos puntos\n\n");
    printf("Ingresa x1 ");
    scanf("%f",&x1);
    printf("Ingresa y1 ");
    scanf("%f",&y1);
    printf("Ingresa x2 ");
    scanf("%f",&x2);
    printf("Ingresa y2 ");
    scanf("%f",&y2);

    //2. Calcula formula(s)
    m = (y2-y1) / (x2-x1);

    //3. Muestra resultado(s)
    printf("\n\n");
    printf("P1(%f, %f)\n",x1,y1);
    printf("P2(%f, %f)\n",x2,y2);
    printf("m = %f\n",m);
}
void distanciaEntrePuntos(void){
    float x1, y1, x2, y2, d;

    //1. Pide datos
    printf("\n\Distancia entre dos puntos\n\n");
    printf("Ingresa x1 ");
    scanf("%f",&x1);
    printf("Ingresa y1 ");
    scanf("%f",&y1);
    printf("Ingresa x2 ");
    scanf("%f",&x2);
    printf("Ingresa y2 ");
    scanf("%f",&y2);

    //2. Calcula formula(s)
    d = sqrt( pow(y2-y1,2) + pow(x2-x1,2) );

    //3. Muestra resultado(s)
    printf("\n\n");
    printf("P1(%f, %f)\n",x1,y1);
    printf("P2(%f, %f)\n",x2,y2);
    printf("d = %f\n",d);
}
