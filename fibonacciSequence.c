#include <stdlib.h>
#include <stdio.h>
#define TAM 10

int F[TAM];

int fib(int n){
	
	if(n<=1){
		F[n]=n;
		return n;
	}
	else{
		if(F[n-2] == -1)
			F[n-2] = fib(n-2);
		if(F[n-1] == -1)
			F[n-1] = fib(n-1);
		F[n]=F[n-1]+F[n-2];
		return F[n-2] + F[n-1];
	}

}

int main(){
	int c;
	for(int i =0; i< TAM;i++)
		F[i]=-1;
	do{
		printf("Digite o termo da sequência de fibonacci que quer imprimir: \n");
		int t;
		scanf("%d", &t);
		printf("%d\n", fib(t-1));
		printf("Deseja continuar? Sim (1) Não (0)\n");
		scanf("%d", &c);
	}
	while(c);
	return 0;
}