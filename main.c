#include <stdio.h>
#include <math.h>


int main(void) {
    int i = 0;
    while (1) {
        /**
        * Деление на 2 3 5 9
        * Проверка чисел до корня
        * Если число делится - Скип
        * Если нет - Идти дальше
        * Если нет и Число не делится ни на одно целое число до своего корня - Оно простое - Вывод
        */
        if (!(i == 2 || i == 3 || i == 5) && !(i % 2 || i % 3 || i % 5)) {
            i++;
            continue;
        } else {
            int HUILO = 1;
            for (int j = 2; j <= sqrt(i); j++) {
                if (i % j == 0) {
                    HUILO = 0;
                    break;
                }
            }
            if (HUILO && i > 1) {
                printf("%d is Prime Number!\n", i);
            }
        }
        i++;
    }
}
