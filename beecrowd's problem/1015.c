//https://judge.beecrowd.com/en/problems/view/1015
#include <stdio.h>
#include <math.h>
 
int main() {
 double X1, Y1, X2, Y2, Distance;
 scanf("%lf %lf %lf %lf", &X1, &Y1, &X2, &Y2);
 
 Distance = sqrt ((X2 - X1) * (X2 - X1) + (Y2 - Y1) * (Y2 - Y1));
 
 printf("%.4lf\n", Distance);
    
    return 0;
}