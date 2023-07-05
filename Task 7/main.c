#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, r1, x2, y2, r2;
    double vec;
    printf("Ведіть дві координати центрів і довжин радіусів першого та другого кола(числа через пробіл):\n");
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
    vec = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // знаходимо довжину між центрами кіл
    if ((x1 == x2) && (y1 == y2) && (r1 == r2)){
        printf("1"); // якщо довжина радіуса і центри співпадають, то кола мають безліч точок перетину
    } else if ((r1 + r2) < vec){
        printf("0"); // якщо довжина між центрами більше суми довжини радіусів, то вони не перетинаються
    } else if ((r1 + r2) > vec){
        printf("2"); // якщо довжина між центрами менше ніж сума довжин радіусів, то вони мають дві точки перетину
    } else if ((r1 + r2) == vec){
        printf("1"); // якщо довжина між центрами дорівнює сумі довжин радіусів, то кола дотикаються в одній точці
    }
    return 0;
}
