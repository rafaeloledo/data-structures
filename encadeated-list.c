#include <stdio.h>
#include <stdlib.h>

typedef struct lista {
	int valor;
	struct lista* prox;
}Lista;

Lista* cria_lista() {
	return NULL;
}
void vazia(Lista* p) {
	if (p == NULL) {
		printf("Esta vazia\n");
	}
	else {
		printf("N esta vazia\n");
	}
}

Lista* insere_no(Lista* l, int i) {
	Lista* novo = (Lista*)malloc(sizeof(Lista));

	novo->valor = i;
	novo->prox = l;

	return novo;
}

void consulta_lista(Lista* head) {
	Lista* ref;
	if (head) {
		printf("Lista: \n");
		for (ref = head;ref != NULL;ref = ref->prox) {
			printf("Valor: %d\n", ref->valor);
		}
	}
	else {
		printf("lista vazia\n");
	}
}
void busca_lista(Lista* l, int i) {
	Lista* ref;

	for (ref = l;ref != NULL;ref = ref->prox) {
		if (ref->valor == i) {
			printf("valor encontrado %d\n", i);
		}
	}

}
Lista* remove_no(Lista* l, int valor) {
	Lista* ant = NULL, * p = l;

	while (p != NULL && p->valor != valor) {
		ant = p;
		p = p->prox;
	}
	if (p == NULL) {
		printf("Valor n encontrado\n");
		return l;
	}
	if (ant == NULL) {
		printf("Lista vazia ou com somente um no\n");
		l = p->prox;
	}
	else {
		ant->prox = p->prox;
	}
	free(p);
	return l;
}
Lista* libera(Lista* p) {
	if (p == NULL) {
		printf("Lista ja esta vazia\n");
	}
	else {
		for (Lista* prox = p->prox; prox != NULL; prox = p->prox) {
			free(p);
			p = prox;
		}
		printf("Lista liberada\n");
		return NULL;
	}
}
int main() {
	Lista* pi;
	int continuar = 0;

	pi = cria_lista();

	printf("Quer digitar os valores? S (1) N (0) ");
	scanf("%d", &continuar);

	if (!continuar) {
		pi = insere_no(pi, 78);
		pi = insere_no(pi, 81);
		pi = insere_no(pi, 85);
		consulta_lista(pi);
		int valor = 85;
		busca_lista(pi, valor);
		pi = remove_no(pi, 85);
		consulta_lista(pi);
		pi = libera(pi);
		consulta_lista(pi);
	}
	else {
		int continuar1 = 0, n = 0;
		do {
			printf("-------------------------------\n");
			printf("- Digite um valor para inserir na lista (1)\n- Consultar Lista (2)\n- Remover no (3)\n- Liberar lista (4)\n- Encerrar (0)\n");
			printf("-------------------------------\n");
			scanf("%d", &continuar1);
			switch (continuar1) {
			case 1:
				scanf("%d", &n);
				pi = insere_no(pi, n);
				break;
			case 2:
				consulta_lista(pi);
				break;
			case 3:
				printf("Digite o valor do no a ser removido: ");
				scanf("%d", &n);
				pi = remove_no(pi, n);
				break;
			case 4:
				pi = libera(pi);
				break;
			case 0:
				printf("Encerrado\n");
				break;
			default:
				break;
			}
		} while (continuar1);

	}
	// libera��o da lista
	// verificar se a lista est� vazia
	// criar a fun��o para entrada dos valores da lista
	return 0;
}