//https://judge.beecrowd.com/en/problems/view/1010
#include <stdio.h>
 
int main() {
 
    int CODE1, NUMBER1;
    double PRICE1, VALORAPAGAR;
    int CODE2, NUMBER2;
    double PRICE2; 
    scanf("%d %d %lf", &CODE1, &NUMBER1, &PRICE1);
    
     scanf("%d %d %lf", &CODE2, &NUMBER2, &PRICE2);
     
    VALORAPAGAR = (NUMBER1 * PRICE1) + (NUMBER2 * PRICE2);
    
    printf("VALOR A PAGAR: R$ %.2lf\n", VALORAPAGAR);
    
    return 0;
}