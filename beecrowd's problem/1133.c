//https://judge.beecrowd.com/en/problems/view/1133
#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    for (int i = X + 1; i < Y; i++) {
        if (i % 3 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
