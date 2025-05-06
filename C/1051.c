#include <stdio.h>

int main(){
    double salary, tax;
    scanf("%lf", &salary);
    if(salary <= 2000){
        printf("Isento\n");
    }
    else if(salary > 2000 && salary <= 3000){
        tax = (salary - 2000)*0.08;
        printf("R$ %.2lf\n", tax);
    }
    else if(salary > 3000 && salary <= 4500){
        tax = (salary - 3000)*0.18 + 1000*0.08;
        printf("R$ %.2lf\n", tax);
    }
    else{
        tax = (salary - 4500)*0.28 + 1500*0.18 + 1000*0.08;
        printf("R$ %.2lf\n", tax);
    }
    return 0;
}