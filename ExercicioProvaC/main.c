#include <stdlib.h>
#include <stdio.h>
#include "Triangulo.h"
#include <math.h>

int main() {

    typedef struct triangulo {
        double lado1;
        double lado2;
        double lado3;
    } Tri;

    Tri* criar_tri(double lado1, double lado2, double lado3){
        Tri* triangulo = (Tri*) malloc(sizeof(Tri));
        if(triangulo != NULL){
            triangulo->lado1 = lado1;
            triangulo->lado2 = lado2;
            triangulo->lado3 = lado3;
        }
        return triangulo;
    }

    void libera(Tri* tri){
        free(tri);
    }

    double perimetro(Tri* tri){
        double lado1 = tri->lado1;
        double lado2 = tri->lado2;
        double lado3 = tri->lado3;
        double soma_lados = lado1 + lado2 + lado3;
        return soma_lados;
    }

    Tri *triA, *triB;
    triA = criar_tri(5, 3, 5);
    triB = criar_tri(10, 3, 5);
    float perA, perB;
    perA = perimetro(triA);
    perB = perimetro(triB);
    printf("Triangulo A criado! \n");
    printf("Tringulo A -> lado1 = %f\n", triA->lado1);
    printf("Tringulo A -> lado2 = %f\n", triA->lado2);
    printf("Tringulo A -> lado3 = %f\n", triA->lado3);
    printf("Perimetro do Triangulo A = %f\n", perA);
    libera(triA);
    printf("--------------------------------------------\n");
    printf("Triangulo B criado! \n");
    printf("Tringulo B -> lado1 = %f\n", triB->lado1);
    printf("Tringulo B -> lado2 = %f\n", triB->lado2);
    printf("Tringulo B -> lado3 = %f\n", triB->lado3);
    printf("Perimetro do Triangulo B = %f\n", perA);
    libera(triB);
    printf("--------------------------------------------\n");


    return 0;
}
