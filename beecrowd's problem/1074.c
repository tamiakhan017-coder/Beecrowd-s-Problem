//https://judge.beecrowd.com/en/problems/view/1074
#include <stdio.h>

int main() {
    int N, x;
    scanf("%d", &N); 

    for (int i = 0; i < N; i++) {
        scanf("%d", &x);

        if (x == 0) {
            printf("NULL\n");
        }
        else if (x % 2 == 0) { 
            if (x > 0)
                printf("EVEN POSITIVE\n");
            else
                printf("EVEN NEGATIVE\n");
        }
        else {  
            if (x > 0)
                printf("ODD POSITIVE\n");
            else
                printf("ODD NEGATIVE\n");
        }
    }
    return 0;
}
