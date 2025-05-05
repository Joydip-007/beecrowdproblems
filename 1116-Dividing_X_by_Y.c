#include <stdio.h>

int main(){
    int x, y, n;
    double div;
    scanf("%d", &n);
    while(n--){
        scanf("%d %d", &x, &y);
        if(y==0){
            printf("divisao impossivel\n");
            continue;
        }
        div = (double)x/y;
        printf("%.1lf\n", div);
    }
    return 0;
}