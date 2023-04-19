#include <stdio.h>
//Criação de uma tabuada de soma
void Tab_soma(int n){
	int i = 0;
	int soma = 0;
	for(i=0;i<11;i++){
		soma = i + n;
		printf("%d + %d = %d\n", i, n, soma);
	}
	printf("\n");
}
void Tab_multiplicacao(int n){
	int i = 2;
	int mult = 0;
	for(i=0;i<11;i++){
		mult = i*n;
		printf("%d x %d = %d\n", i, n, mult);
	}
}

int main(){
	char nome[1000];
	int n;
	int c = 1;
	printf("---------------JOGO DA TABUADA-----------------------\n");
	printf("Digite seu nome: ");
	fgets(nome, 1000, stdin);
	printf("Ola, %s\n", nome); 
	do{
		printf("Iniciando...");
		
		printf("\nDigite um numero POSITIVO para saber a sua tabuada da SOMA e MULTIPLICACAO: ");
		scanf("%d", &n);
		if(n<0){
			do{
				printf("Numero invalido! Tente novamente: ");
				scanf("%d", &n);
			}while(n<0);
		}
		Tab_soma(n);
		Tab_multiplicacao(n);
		printf("\nDeseja ver a tabuada de mais um numero? (S = 1 ou  N = 0): ");
		scanf("%d", &c);
	}while(c == 1);
	printf("\nDesligando o programa da tabuada");
	printf("\n.\n.");
	printf("\nPrograma encerrado.\n");
	return 0;
}