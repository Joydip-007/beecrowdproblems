#include <stdio.h>

int main(){
    char Name;
    double ini_salary, sales, final_salary;

    getchar();
    scanf("%s", &Name);
    getchar();
    scanf("%lf", &ini_salary);
    scanf("%lf", &sales);
    final_salary = ini_salary + sales*.15;
    printf("TOTAL = R$ %.2lf\n", final_salary);
}
