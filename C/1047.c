#include <stdio.h>

int main() {
    int strt_hour, strt_min, end_hour, end_min;
    scanf("%d %d %d %d", &strt_hour, &strt_min, &end_hour, &end_min);

    if (end_hour == strt_hour && end_min == strt_min) {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    } else if (end_hour < strt_hour || (end_hour == strt_hour && end_min < strt_min)) {
        end_hour += 24;
        if (end_min < strt_min) {
            end_min += 60;
            end_hour--;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", end_hour - strt_hour, end_min - strt_min);
    } else {
        if (end_min < strt_min) {
            end_min += 60;
            end_hour--;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", end_hour - strt_hour, end_min - strt_min);
    }
    return 0;
}