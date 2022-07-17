#include <stdlib.h>
#include <stdio.h>

int main()
{
    int continuar = 1;
    int totalApples = 0, aux;
    
    system("chcp 65001");
    
    do
    {
        printf("Digite o número de maçãs compradas: ");
        scanf("%d", &aux);
        totalApples = totalApples + aux;
        printf("O total de maçãs atuais compradas é %d\n", totalApples);
        printf("Deseja continuar? 1 - Sim ou 0 - Não\n");
        scanf("%d", &continuar);
    }
    while(continuar);

    return 0;
}