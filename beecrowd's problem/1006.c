//https://judge.beecrowd.com/en/problems/view/1006
#include <stdio.h>
 
int main() {
    double MEDIA, A, B, C;
    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);
    MEDIA = (A * 2 + B * 3 + C * 5) / 10;
    printf("MEDIA = %.1lf\n" , MEDIA);
    return 0;
}