#include <stdio.h>

int main(){
    int g1, g2, c, count=0, g1v=0, g2v=0, emp=0;
    while(1){
        scanf("%d %d", &g1, &g2);
        count++;
        if(g1 > g2) g1v++;
        else if(g1 < g2) g2v++;
        else emp++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &c);
        if(c == 2) break;
    }
    printf("%d grenais\n", count);
    printf("Inter:%d\n", g1v);
    printf("Gremio:%d\n", g2v);
    printf("Empates:%d\n", emp);
    if(g1v > g2v) printf("Inter venceu mais\n");
    else if(g1v < g2v) printf("Gremio venceu mais\n");
    else printf("Nao houve vencedor\n");
    return 0;
}
