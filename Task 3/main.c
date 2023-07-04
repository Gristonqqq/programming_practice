#include <stdio.h>
#include <math.h>

int main() {
    int p, result;
    printf("Введіть розрядність числа:\n");
    scanf("%d", &p);
    result = pow(p,2) - ((p - 2) * 3); //формула, яка розраховує кількість комбінацій, в яких немає 3 однакових цифри підряд
    printf("%d", result);
    return 0;
}
