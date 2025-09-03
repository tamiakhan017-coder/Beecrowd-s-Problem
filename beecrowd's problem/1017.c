//https://judge.beecrowd.com/en/problems/view/1017
#include <stdio.h>
 
int main() {
 
int time, speed;
double distance, fuel;
scanf("%d %d", &time, &speed);

distance = time * speed;
fuel = distance/12.0;

printf("%.3lf\n", fuel);
 
    return 0;
}