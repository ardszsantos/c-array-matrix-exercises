#include <stdio.h>
#include <stdlib.h>

void exercise1() {
    int numeros[5] = {10, 20, 30, 40, 50};
    printf("Valor na terceira posicao (indice 2): %d\n", numeros[2]);
}

void exercise2() {
    int nums[6];
    int arrSize = sizeof(nums) / sizeof(nums[0]);
    int i;

    for (i = 0; i < arrSize; i++) {
        printf("Digite o numero para a posicao %d: ", i);
        scanf("%d", &nums[i]);
    }

    printf("Ordem inversa:\n");
    for (i = arrSize - 1; i >= 0; i--) {
        printf("posicao %d: %d\n", i, nums[i]);
    }
}

void exercise3() {
    int matrix[3][3];
    int i, j, sum = 0;

    printf("Digite os 9 numeros da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
            sum += matrix[i][j];
        }
        printf("\n");
    }

    printf("Soma de todos os elementos: %d\n", sum);
}

int main(int argc, char *argv[]) {
    exercise1();
    exercise2();
    exercise3();
    return 0;
}
