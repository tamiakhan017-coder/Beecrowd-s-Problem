//https://judge.beecrowd.com/en/problems/view/1011
#include <stdio.h>
 
int main() {
 
    double VOLUME, R;
   const double pi = 3.14159;
    scanf("%lf", &R);
    
    VOLUME = (4.0/3.0) * pi * R * R * R;
    
    printf("VOLUME = %.3lf\n", VOLUME);
 
    return 0;
}