//https://judge.beecrowd.com/en/problems/view/1064
#include <stdio.h>
 
int main() 
{
double num,sum=0.0;
int count=0;
for(int i=0; i<6; i++){
    scanf("%lf",&num);
    if(num>0){
        count++;
        sum+=num;
    }
}
printf("%d valores positivos\n",count);
printf("%.1lf\n",sum/count);
    return 0;
}