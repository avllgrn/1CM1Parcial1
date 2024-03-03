#include <stdio.h>
#include <math.h>

int main(void){
    float x1, y1, x2, y2, x3, y3;

    //1. Pide datos
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
    printf("  P1(%f, %f)\n",x1,y1);
    printf("+ P2(%f, %f)\n",x2,y2);
    printf("= P3(%f, %f)\n",x3,y3);

    return 0;
}
