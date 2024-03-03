#include <stdio.h>

int main(void){
    float a, b, c;

    //1. Pide datos
    printf("Ingresa un numero ");
    scanf("%f",&a);
    printf("Ingresa otro numero ");
    scanf("%f",&b);

    //2. Calcula formula(s)
    c = a + b;

    //3. Muestra resultado(s)
    printf("%f + %f = %f\n",a, b, c);

    return 0;
}
