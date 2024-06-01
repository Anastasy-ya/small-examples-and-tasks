/*Проверить, что введенная строка меньше 100 символов заканчивается символом новой строки,
начинается с "_" или с латинской буквы в любом регистре, не содержит других
символов кроме "_", латинских букв в любом регистре и цифр. Вывести Yes or No*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int counter = 0;
    char *str = (char *)malloc(1 * sizeof(char));
    char n;
    int flag = 0;  // true

    while (n != '\n') {
        if (counter < 100) {
            scanf("%c", &n);
            counter += 1;
            str = realloc(str, counter * sizeof(char));
            if (str == NULL) {
                printf("Memory allocation error");
                return 1;
            }
            str[counter - 1] = n;
        } else {
            printf("n/a\n");
            return 1;
        }
    }

    for (int i = 0; i < counter - 1; i++) {
        if (((str[0] == '_') ||
             ((str[0] >= 97) && (str[0] <= 122)) ||  // первый символ строчная латинская буква
             ((str[0] >= 65) && (str[0] <= 90))  // первый символ заглавная латинская буква
             ) &&
            (((str[i] >= 97) && (str[i] <= 122)) ||  // содержит строчные
             ((str[i] >= 65) && (str[i] <= 90)) ||   // содержит заглавные
             ((str[i] >= 48) && (str[i] <= 57))      // содержит цифры
             )) {
            flag = 0;
        } else {
            flag = 1;
        }
    }

    flag == 0 ? printf("Yes") : printf("No");

    free(str);
    return 0;
}