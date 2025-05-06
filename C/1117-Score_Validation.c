#include <stdio.h>

int main(){
    double x, y, media;
    scanf("%lf", &x);
    while(x < 0 || x > 10){
        printf("nota invalida\n");
        scanf("%lf", &x);
    }
    scanf("%lf", &y);
    while(y < 0 || y > 10){
        printf("nota invalida\n");
        scanf("%lf", &y);
    }
    media = (x + y) / 2;
    printf("media = %.2lf\n", media);
    return 0;
}
