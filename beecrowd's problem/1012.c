//https://judge.beecrowd.com/en/problems/view/1012
#include <stdio.h>
 
int main() {
    double A, B, C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
    const double pi = 3.14159;
    scanf("%lf %lf %lf", &A, &B, &C);
    
    TRIANGULO = (A * C) / 2.0;
    CIRCULO = pi * C * C;
    TRAPEZIO = ((A + B) * C) / 2.0;
    QUADRADO = B * B;
    RETANGULO = A * B;
    
    printf("TRIANGULO: %.3lf\n", TRIANGULO);
   printf("CIRCULO: %.3lf\n", CIRCULO);
    printf("TRAPEZIO: %.3lf\n", TRAPEZIO);
   printf("QUADRADO: %.3lf\n", QUADRADO);
    printf("RETANGULO: %.3lf\n", RETANGULO);
    
    return 0;
}