//https://judge.beecrowd.com/en/problems/view/1079
#include <stdio.h>

int main() {
    int N;
    double A, B, C, average;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%lf %lf %lf", &A, &B, &C);
        average = (A*2 + B*3 + C*5) / 10.0;
        printf("%.1lf\n", average); // exactly one decimal
    }

    return 0;
}
