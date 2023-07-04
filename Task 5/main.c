#include <stdio.h>
#include <math.h>

int main() {
    int n, result, all,  badvariants = 0;
    printf("Введіть довжину послідовності:\n");
    scanf("%d", &n);
    all = pow(2,n);
    do {
        for (int i = 0; i < n - 2; i++) {
            badvariants += n - (2 + i);
        }
        n-=4;
    } while (n > 2);
    result = all - badvariants;
    printf("Кількість послідовностей: %d", result);
    return 0;
}
