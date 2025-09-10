//https://judge.beecrowd.com/en/problems/view/1144
#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    for (int i = 1; i <= N; i++) {
        printf("%d", i);
        if (i % M == 0 || i == N) printf("\n");
        else printf(" ");
    }

    return 0;
}
