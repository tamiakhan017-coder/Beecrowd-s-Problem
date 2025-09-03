//https://judge.beecrowd.com/en/problems/view/1014
#include <stdio.h>
 
int main() {
 
    int X;
    double Y, average;
    scanf("%d %lf", &X, &Y);
    
    average = X / Y;
    
    printf("%.3lf km/l\n", average);
    
    
 
    return 0;
}