#include <stdio.h>

int main(void){
    float b, h, a, p;

    //1. Pide datos
    printf("Ingresa base de rectangulo ");
    scanf("%f",&b);
    printf("Ingresa altura de rectangulo ");
    scanf("%f",&h);

    //2. Calcula formula(s)
    a = b * h;
    p = 2*b + 2*h;

    //3. Muestra resultado(s)
    printf("area = %f\n",a);
    printf("perimetro = %f\n",p);

    return 0;
}
