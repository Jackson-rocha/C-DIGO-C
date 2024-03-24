#include<stdio.h>

int main(void){
	float nota1, nota2, media;
	int matricula, cont;
	//valor inicial, condiçao limite, incremento
	for(cont = 1; cont <=3; cont = cont +1){
		printf("%d = Boa noite\n", cont);
	
}
	printf("Digite a matricula do aluno : ");
	scanf("%d", &matricula);
	
	printf("Digite a primeira nota :");
	scanf("%f", &nota1); //armazena um float no enderço da variavel nota1
	
	printf("Digite a segunda nota do aluno : ");
	scanf("%f", &nota2); //armazena um float no endereço da variavel nota2
	
	media = (nota1 + nota2)/2;
	
	printf("Media do %d é = %.2f", matricula, media);
	
	
	
	return 0;
}
