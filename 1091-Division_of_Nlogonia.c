#include <stdio.h>

int main(){
    int k=1, x, y, n, m;
    while(scanf("%d", &k) == 1 && k){
        scanf("%d %d", &n, &m);
        while(k--){
            scanf("%d %d", &x, &y);
            if(x==n || y==m){
                printf("divisa\n");
            }
            else if(x<n && y<m){
                printf("SO\n");
            }
            else if(x<n && y>m){
                printf("NO\n");
            }
            else if(x>n && y<m){
                printf("SE\n");
            }
            else if(x>n && y>m){
                printf("NE\n");
            }
        }
    }
    return 0;
}