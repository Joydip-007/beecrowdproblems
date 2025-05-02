#include <stdio.h>

int main(){
    double n1, n2, n3, n4;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    double avg = ((n1*2+n2*3+n3*4+n4*1)/(2+3+4+1));
    printf("Media: %.1lf\n", avg);
    if(avg >= 7){
        printf("Aluno aprovado.\n");
    }
    else if(avg >= 5){
        printf("Aluno em exame.\n");
        double n5;
        scanf("%lf", &n5);
        printf("Nota do exame: .1lf\n", n5);
        avg = (avg + n5)/2;
        if(avg >= 5){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", avg);
    }
    else {
        printf("Aluno reprovado.\n");
    }

    return 0;
}