#include <stdio.h>
#include <math.h>

int main(void){
    float r, a, p;

    //1. Pide datos
    printf("Ingresa radio de circulo ");
    scanf("%f",&r);

    //2. Calcula formula(s)
    a = M_PI * pow(r,2);
    p = 2 * M_PI * r;

    //3. Muestra resultado(s)
    printf("area = %f\n",a);
    printf("perimetro = %f\n",p);

    return 0;
}
