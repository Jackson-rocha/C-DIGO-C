#include<stdio.h>
int main(void){
	char nome[4];
	int numero;
	float nota1, nota2, media;
	char conceito;
	
	printf("Digite seu primeiro nome: ");
	scanf("%s",nome);
	
	printf("Digite seu numero de matricula: ");
	scanf("%d", &numero);
	
	printf("Digite a primeira nota do aluno: ");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota do aluno: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2)/2;
	
	if(media >= 8){
		conceito = 'A';
	}else{
		conceito = 'B';
	}
	
	printf("\n Nome do aluno: %s\n", nome);
	printf("Matricula: %d\n", numero);
	printf("Media do aluno = %.1f", media);
	printf("\n Conceito do aluno: %c\n", conceito);
	
	return 0;
}
