//https://judge.beecrowd.com/en/problems/view/1080
#include <stdio.h>

int main() {
    int num, max, pos;

    for (int i = 1; i <= 100; i++) {
        scanf("%d", &num);
        if (i == 1) {       // first number
            max = num;
            pos = 1;
        } else if (num > max) {
            max = num;
            pos = i;
        }
    }

    printf("%d\n%d\n", max, pos); // no extra spaces
    return 0;
}
