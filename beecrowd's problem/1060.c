//https://judge.beecrowd.com/en/problems/view/1060
#include <stdio.h>
 
int main() 
{
 double num;
 int count=0;
 for(int i=0; i<6; i++){
     scanf("%lf",&num);
     if(num>0){
         count++;
     }
 }
 printf("%d valores positivos\n",count);
    return 0;
}