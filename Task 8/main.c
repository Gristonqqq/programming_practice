#include <stdio.h>
#include <string.h>

int fac(int a);
int numofsame(char letter, int place,char word[]);

int main() {
    char word[14];
    int len, result;
    printf("Введіть слово(до 14 символів):\n");
    scanf("%s", word);
    len = strlen(word); //вираховуємо довжину слова
    result = fac(len); //факторіал довжини слова для подальших обчислень
    for (int i = 0; i < len; i++){
        result = result/fac(numofsame(word[i], i, word)); //кількість анаграм зменжується на факторіал кожної літери, що повторюється
    }
    printf("Кількість унікальних анаграм: %d", result);
    return 0;
}

int fac(int a){
    int answ = 1;
    for (int i = 1; i <= a; i++){
        answ*=i;
    } // цикл, який рахує факторіал
    return answ;
}

int numofsame(char letter, int place, char word[]){
    int num = 0;
    for (int j = place - 1; j >= 0; j--){
        if (letter == word[j]){
            return 1;
        }
    } // цикл, який перевіряє, щоб ми не зменшували результат за одну й ту саму літеру кілька разів
    for (int i = 0; i < 14; i++){
        if (letter == word[i]){
            num++;
        }
    } // цикл, який рахує кількість однакових літер
    return num;
}