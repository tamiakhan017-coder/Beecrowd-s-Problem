#include<stdio.h>

int main()
{
    int start, end, duration;
    scanf("%d %d", &start, &end);
    if(start==end){
        duration = 24;
}else if (start>end){
       duration=end-start;
}else{
    duration= (24-start)+end;
}
printf("O JOGO DUROU %d HORA(s)\n", duration);
return 0;
}
