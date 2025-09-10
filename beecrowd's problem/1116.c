//https://judge.beecrowd.com/en/problems/view/1116
#include <stdio.h>

int main() {
    int N;       // number of test cases
    double X, Y; // using double for division

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%lf %lf", &X, &Y);

        if (Y == 0) {
            printf("divisao impossivel\n");
        } else {
            printf("%.1lf\n", X / Y);
        }
    }

    return 0;
}
