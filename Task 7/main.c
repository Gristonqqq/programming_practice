#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, r1, x2, y2, r2;
    double vec;
    printf("Ведіть дві координати центрів і довжин радіусів першого та другого кола(числа через пробіл):\n");
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
    vec = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    if ((x1 == x2) && (y1 == y2) && (r1 == r2)){
        printf("1");
    } else if ((r1 + r2) < vec){
        printf("0");
    } else if ((r1 + r2) > vec){
        printf("2");
    } else if ((r1 + r2) == vec){
        printf("1");
    }
    return 0;
}
