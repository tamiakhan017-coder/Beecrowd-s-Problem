//https://judge.beecrowd.com/en/problems/view/1009
#include <stdio.h>
 
int main() {
 char NAME[50];
 double SALARY, SOLD, TOTAL;
 scanf("%s",NAME);
 scanf("%lf",&SALARY);
 scanf("%lf",&SOLD);
 
 TOTAL = SALARY + (SOLD * 0.15);
 
 printf("TOTAL = R$ %.2f\n", TOTAL);
    return 0;
}