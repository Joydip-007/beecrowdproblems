#include <stdio.h>

int main(){
    int strt_hour, end_hour;
    scanf("%d %d", &strt_hour, &end_hour);
    if(end_hour <= strt_hour){
        end_hour += 24;
    }
    printf("O JOGO DUROU %d HORA(S)\n", end_hour - strt_hour);
    return 0;
}