#include <stdio.h>

int main(){
    double M[12][12];
    double sum = 0, avg=0;
    char T;
    int i, j, n;
    scanf("%d", &n);
    getchar();
    scanf("%c", &T);
    getchar();
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf", &M[i][j]);
        }
    }
    for(i=0;i<12;i++){
        sum += M[i][n];
    }
    if(T=='S'){
        printf("%.1lf\n", sum);
    }
    else if(T=='M'){
        avg = sum/12;
        printf("%.1lf\n", avg);
    }
    return 0;
}