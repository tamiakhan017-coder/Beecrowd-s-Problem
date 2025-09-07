//https://judge.beecrowd.com/en/problems/view/1037
#include <stdio.h>
 
int main() {
 
   float A;
   scanf("%f", &A);
   if(A<0 || A>100){
       printf("Fora de intervalo\n");
   }else if(A<=25.0){
       printf("Intervalo [0,25]\n");
   }else if(A<=50.0){
       printf("Intervalo (25,50]\n");
   }else if(A<=75.0){
       printf("Intervalo (50,75]\n");
   }else{
       printf("Intervalo (75,100]\n");
       
   }
   
 
    return 0;
}