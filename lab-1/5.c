#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float sum = 0, a;

    printf("Введите n: "); scanf("%i", &n);
    printf("Введите a: "); scanf("%f", &a);

    for(int i = 0; i < n; i++) {
        sum += 1. / pow(a, pow(2, i));
    }

    printf("Конечное число: %f \n", sum);

    return 0;
}