#include <stdlib.h>
#include <stdio.h>

void insere(int x, int y[], int l);
void insertion_sort(int v[], int n);

int main() {
    int v[5], n = 5;

    for (int z = 0;z < 5;z++) {
        printf("Digite um numero para a posicao %d do vetor: ", z);
        scanf(" %d", &v[z]);
    }
    insertion_sort(v, n);
    printf("\nVetor em ordem crescente: ");
    for (int k = 0;k < 5;k++) {
        printf("%d", v[k]);
    }
    return 0;
}
void insere(int x, int y[], int l) {
    printf("\nl antes do while: %d\n", l);
    printf("y[l] e x antes do while: %d\n", y[l]);
    while (l > 0 && x < y[l - 1]) {
        y[l] = y[l - 1];
        printf("Vetor no while apos a atribuicao: ");
        for (int k = 0;k < 5;k++) {
            printf("%d", y[k]);
        }
        l--;
        printf("\nl depois do l--: %d\n", l);
    }
    printf("x antes da atribuicao 2: %d\n", x);
    y[l] = x;
    printf("Vetor no while apos a atribuicao: ");
    for (int k = 0;k < 5;k++) {
        printf("%d", y[k]);
    }
    printf("\ny[l] depois da atribuicao 2: %d\n", y[l]);
}
void insertion_sort(int v[], int n) {
    for (int i = 0;i < n;i++) {
        printf("Vetor v no for: ");
        for (int k = 0;k < 5;k++) {
            printf("%d", v[k]);
        }
        insere(v[i], v, i);
    }
}