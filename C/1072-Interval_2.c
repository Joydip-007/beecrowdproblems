#include <stdio.h>

int main(){
    int n, m, count=0;
    scanf("%d", &n);
    for(int i=0; i<n;i++){
        scanf("%d", &m);
        if(10<=m && m<=20){
            count++;
        }
    }
    printf("%d in\n", count);
    printf("%d out\n", n-count);
    return 0;
}