//https://judge.beecrowd.com/en/problems/view/1043
#include <stdio.h>
 
int main() {
 double A,B,C;
 double Perimetro, Area;
 scanf("%lf %lf %lf", &A,&B,&C);
 
 Perimetro = A+B+C;
 Area = ((A+B)*C)/2.0;
 if(A+B>C && B+C>A && C+A>B){
     printf("Perimetro = %.1lf\n",Perimetro);
 }else{
     printf("Area = %.1lf\n", Area);
}
 
    return 0;
}