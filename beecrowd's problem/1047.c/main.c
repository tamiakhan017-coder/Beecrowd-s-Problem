#include <stdio.h>

int main() {
    int startHour, startMinute;
    int endHour, endMinute;
    int durationHours, durationMinutes;

    scanf("%d %d %d %d", &startHour, &startMinute, &endHour, &endMinute);

    int startTotal = startHour * 60 + startMinute;
    int endTotal = endHour * 60 + endMinute;

    if (endTotal <= startTotal) {
        endTotal += 24 * 60;
    }

    int durationTotal = endTotal - startTotal;
    durationHours = durationTotal / 60;
    durationMinutes = durationTotal % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durationHours, durationMinutes);

    return 0;
}
