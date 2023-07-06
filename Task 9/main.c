#include <stdio.h>

int lostway(int step);

int main() {
    int x, y, arr[100], counter = 1, step = 1;
    printf("Введіть два числа(через пробіл):\n");
    scanf("%d %d", &x, &y);
    arr[0] = x + step;
    for (int i = x + 1; i < y;){
        if (lostway(step + 1) <= y - i){
            step++;
            i += step;
            arr[counter] = i;
            counter++;
        } else if (lostway(step) <= y - i){
            i += step;
            arr[counter] = i;
            counter++;
        } else if (lostway(step - 1) <= y - i){
            step--;
            i += step;
            arr[counter] = i;
            counter++;
        }
    }
    printf("Кроки виглядають таким чином:\n %d,", x);
    for (int i = 0; i < counter; i++) {
        printf(" %d,", arr[i]);
    }
    printf("\nПри цьому їх кількість: %d", counter);
    return 0;
}

int lostway(int step){
    int result = 0;
    for (int i = step; i > 0; i--){
        result += i;
    }
    return result;
}