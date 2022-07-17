#include <stdlib.h>
#include <stdio.h>

int main()
{
    system("chcp 65001");
    printf("Olá usuário\n");

    char nome[20];
    printf("Digite o nome completo: ");
    gets(nome);

    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);

    char cidade[20];
    printf("Digite a cidade: ");
    fflush(stdin);
    gets(cidade);

    printf("Olá %s, seja bem-vindo ao meu primeiro programa interativo python!\nQueremos conferir sua data de nascimento.\n", nome);

    printf("Digite o dia: ");
    char dia[20];
    scanf("%s", dia);

    printf("Digite o mês: ");
    char mes[20];
    scanf("%s", mes);

    printf("Digite o ano: ");
    char ano[20];
    scanf("%s", ano);

    printf("Você nasceu em %s/%s/%s. Correto?");

    int n1, n2;

    printf("Digite dois números: ");
    scanf("%d%d", &n1, &n2);

    printf("A soma é: %d", n1 + n2);

    printf("Obrigado, este foi meu primeiro teste interativo, com certeza no futuro serei\nmaior que Mark Zuckerberg");

    return 0;
}