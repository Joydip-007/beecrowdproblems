#include <stdio.h>

int main(){
    double a, b, c, temp = 0;
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a>temp){
        temp = a;
        if(b>temp){
            temp = b;
            if(c>temp){
                temp = c;
                c = a;
                a = temp;
            }
            else{
                temp = b;
                b = a;
                a = temp;
            }
            if(b<c){
                temp = c;
                c = b;
                b = temp;
            }
        }
        else if(c>temp){
            temp = c;
            c = a;
            a = temp;
        }
        else if(c>b){
            temp = b;
            b = c;
            c = temp;
        }
    }
    if(a >= b+c){
        printf("NAO FORMA TRIANGULO\n");
    }
    else if((a*a)==((b*b)+(c*c))){
        printf("TRIANGULO RETANGULO\n");
    }
    else if((a*a)>((b*b)+(c*c))){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if((a*a)<((b*b)+(c*c))){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a==b && b==c){
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(a==b || b==c){
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}