#include<stdio.h>

int main(void){
	float area, base, altura;
	
	printf("Digite o tamanho da base:");
	scanf("%f", &base);
	
	printf("Digite o tamanho da altura:");
	scanf("%f", &altura);
	
	area = (base * altura)/2;
	
	printf("A area do triangulo é :%.f", area);
	
	
	return 0;
}
