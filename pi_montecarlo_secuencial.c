#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/* Área de un cuadrado (A_s): (2*r)^2 = 4*r^2 (Notar que el radio seria la mitad de su ancho)*/
/* Área de un círculo (A_c): pi*(r^2)*/
/* Razón de las áreas: A_c/A_s = (pi * r^2)/(4* r^2) = pi/4*/
/* Para calcular pi se utilizará el método de montecarlo el cual indica
    que la razon de puntos generados aleatoriamente dentro y fuera de la circunferencia
    sigue la misma razon de las áreas mencionadas.
    Es decir: P_d/P_a = A_c/A_s = pi/4 
    Entonces: pi = (4* Pd)/P_a. */
    
/*Ecuacion de la circunferencia: x^2 + y^2 = r^2 
Es decir, un punto P1 = (a,b) estará adentro sii a^2 + b^2 <= r^2*/

#define R 2
#define CANT 1000000
int P_d = 0;

int main(){
    srand(time(NULL));
    float x = 0;
    float y = 0;
    float pi;
    for(int i = 0; i < CANT; i++){
        
        x = ((float)rand()/(float)(RAND_MAX)) * 2;
        y = ((float)rand()/(float)(RAND_MAX)) * 2;
        //printf("Un valor de x es: %f\n", x);
        if (sqrt(x*x + y*y) <= R)
            P_d++;
    }
    pi = (4*P_d)/(float)CANT;
    printf("Pi con %d puntos generados vale: %f\n", CANT, pi);
    return 0;
}
   