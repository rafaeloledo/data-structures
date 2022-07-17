#include <stdlib.h>
#include <stdio.h>
int cont=0;

int adiciona(int *change, int coin, int *posicao){
    change[*posicao] = coin;
    ++ *posicao;
    ++ cont;
}

int* minCoinChange (int *coins, int amount, int tam){
    int *change = malloc((tam)* sizeof(int));
    int total = 0;
    int posicao=0;
    for (int i = tam - 1; i>=0; i--){
        int coin = coins[i];
        while (total + coin <= amount){
            adiciona(change,coin,&posicao);
            total += coin;
        }
    }
    return change;
}

int main(){
    int tamVet = 0;
    printf("Digite quantos valores distintos ou iguais queres digitar para se encontrar o número mínimo de moedas para troco: ");
    scanf("%d", &tamVet);
    int *vetor = malloc((tamVet) * sizeof(int));;
    printf("Digite os valores disponíveis de moeda em ordem cresecnte: \n");
    for(int i = 0; i < tamVet; i++){
        scanf("%d", &vetor[i]);
    }
    printf("Digite o valor a ser trocado: ");
    int troco = 0;
    scanf("%d", &troco);
    int *v = NULL;
    int soma=0;
    v = minCoinChange(vetor, troco, tamVet);
    for(int i = 0; i < cont; i++){
        soma+=v[i];
        printf("Moeda %d : %d Somatório: %d\n", i + 1, v[i], soma);
    }
}
