//https://judge.beecrowd.com/en/problems/view/1008
#include <stdio.h>
 
int main() {
    int NUMBER, HOURS;
    double RATE, SALARY;
    scanf("%d",&NUMBER);
    scanf("%d",&HOURS);
    scanf("%lf",&RATE);
    
    SALARY = HOURS * RATE;
    
    printf("NUMBER = %d\n" , NUMBER);
    printf("SALARY = U$ %.2lf\n" , SALARY);
    
    return 0;
}