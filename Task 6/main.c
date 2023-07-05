#include <stdio.h>
#include <math.h>

int main() {
    int x1, x2, y1, y2, x, y;
    double result;
    printf("Введіть чотири числа через пробіл(координати початку та кінція):\n");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    x = x2 - x1; //перша кордината вектора
    y = y2 - y1; //друга координата вектора
    result = sqrt(pow(x, 2) + pow(y,2)); //обчислення модуля вектора за формулою
    printf("Довжина: %lf", result);
    return 0;
}
