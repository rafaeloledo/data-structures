#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "FM.h"

struct paper n[3];
void create_file() {
    FILE* pont = fopen("doc.txt", "w");
    if (pont) {
        fputs("ASVB3 12.50 KLOM4 9.90 BFFE34 57.60", pont);
        fclose(pont);
    }
}

void charge_data() {
    FILE* pont = fopen("doc.txt", "r");
    char string[100], * aux;
    int i = 0;
    fgets(string, 100, pont);
    aux = strtok(string, " ");
    n[i].code = malloc(sizeof(strlen(aux)));
    strcpy(n[i].code, aux);
    i++;
    for (int j = 0;j < 3;i++) {
        aux = strtok(NULL, " ");
        if (i % 2 == 0) {
            n[j].code = malloc(sizeof(strlen(aux)));
            strcpy(n[j].code, aux);
        }
        else if (i % 2 != 0) {
            n[j].price = atof(aux);
            j++;
        }
    }
}

void market() {
    int op = 0;
    char paper[5];
    do {
        printf("Choose one of the options below:\n1-Show papers\n2-Add a buy order\n3-Add a sell order\n");
        scanf("%d", &op);
        switch (op) {
        case 1: {
            for (int i = 0; i < 3; i++) {
                printf("Name: %s \\ Last price: %.2lf\n", n[i].code, n[i].price);
            }
            break;
        }
        case 2: {
            printf("Insert the paper to buy: ");
            scanf("%s", paper);
            for (int k = 0; k < 3; k++) {
                if (strcmp(paper, n[k].code) == 0) {
                    printf("Insert a amount and the price: ");
                    scanf("%d%lf", &n[k].m.b->amount, &n[k].m.b->price);
                    if (n[k].m.b->price == n[k].m.s->price) {
                        if (n[k].m.b->amount >= n[k].m.s->amount) {
                            printf("Compra realizada com sucesso.\n");
                            printf("Total comprado: %d");
                        }
                    }
                }
            }
            break;
        }
        case 3: {
            printf("Insert a paper to sell: ");
            scanf("%s", paper);
            for (int j = 0; j < 3; j++) {
                if (strcmp(paper, n[j].code) == 0) {
                    printf("Insert a amount and the price: ");
                    scanf("%d%lf", &n[j].m.s->amount, &n[j].m.s->price);
                }
            }
            break;
        }
        default: {
            break;
        }
        }
        printf("Do u want to continue ? (1) Sim (0) Não ");
        scanf("%d", &op);
    } while (op);
}
