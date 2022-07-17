#include <stdio.h>
#include <stdlib.h>
int fatorial (int n);
int main ( ){
    int n=5;
    printf("Fatorial de n: %d", fatorial(n));
    return 0;
}
int fatorial (int n) {
	  if (n==0 || n==1){
        printf("Retornei no if.\n");
        return 1; 
    }
    else{
		printf("Retornei no else.\n");
    return n * fatorial (n-1);
    }
}
          