#include <stdio.h>

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};
    int *ponteiro = &numeros[5];

    for (int i = 1; i <= 7; i++) {
        printf("%d ", *(ponteiro - i));
    }

    return 0;
}