#include <stdio.h>

int main(){
    int n, fact = 1;
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("%d\n", fact);
    }
    return 0;
}