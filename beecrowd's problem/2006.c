//https://judge.beecrowd.com/en/problems/view/2006
#include <stdio.h>
 
int main() {
 
    int T, A, B, C, D, E;
    int X=0;
    scanf("%d", &T);
    scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
    
    
    if (A==T) X++;
    if (B==T) X++;
    if (C==T) X++;
    if (D==T) X++;
    if (E==T) X++;
    printf("%d\n", X);
return 0;
}