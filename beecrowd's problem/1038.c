//https://judge.beecrowd.com/en/problems/view/1038
#include <stdio.h>
 
int main() {
 
    int X, Y;
    double Total;
    scanf("%d %d", &X, &Y);
    if (X == 1) Total = 4.00 * Y;
    else if (X == 2) Total = 4.50 *Y;
    else if (X == 3) Total = 5.00 *Y;
    else if (X == 4) Total = 2.00 *Y;
    else if (X == 5) Total = 1.50 *Y;
    printf("Total: R$ %.2lf\n", Total);
    return 0;
}