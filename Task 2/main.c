#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int N, arr[20], i = 0, t, condition = 1;
    char numbers[100];
    printf("Введіть кількість чисел\n");
    scanf("%d", &N); //зчитування кількості чисел
    getchar(); //очищення буферу після зчитування числа N
    printf("Введіть числа через пробіл:\n");
    fgets(numbers, sizeof(numbers), stdin); //зчитування рядка чисел
    char* token = strtok(numbers, " "); //розділення рядка на окремі числа
    while (token != NULL){
        arr[i] = atoi(token); //перестворення рядку в число і присвоєння масиву
        i++;
        token = strtok(NULL, " "); //перехід до наступного числа
    } // цикл для розподілення чисел в масив
    for (int j = 0; j < i; j++){
        for (int k = j + 1; k < i; k++){
            if (arr[j] < arr[k]){
                t = arr[k];
                arr[k] = arr[j];
                arr[j] = t;
            }
        }
    } //цикл, який ворядковує числа в порядку спадання(можна і без нього, але це пришвидшує процес пошуку НСК)
    t = 0;
    while (condition){
        t+=arr[0];
        for (int j = 0; j < i; j++){
            if (t % arr[j] != 0){
                break;
            } else if ((j==i - 1) && (t%arr[j] == 0)) {
                condition = 0;
            } else {
                continue;
            }
        }
    } //цикл, який перебирає числа кратні найбільшому і перевіряє чи являється воно кратне іншим
    printf("Найменше спільне кратне чисел %d", t);
    return 0;
}
