#include<stdio.h>

int main(void){
	float valor1, valor2, valor3, valor4, valor5, consumo, resultado;
	
	valor1 = 1.25;
	valor2 = 1.50;
	valor3 = 1.75;
	valor4 = 2.00;
	valor5 = 2.50;
	
	printf("calculo de consumo de energia\n");
	printf("Digite a quantidade de KwH que foi consumido\n");
	scanf("%f", &consumo);
	
	if(consumo <= 300){
		resultado = consumo * valor1;
		printf("O consumo de energia da fabrica é : %.2f KwH.", resultado);
	}else if(consumo > 301 && consumo <=500){
		resultado = consumo * valor2;
		printf("O consumo de energia da fabrica é : %.2f KwH.", resultado);
	}else if(consumo > 501 && consumo <=600){
		resultado = consumo * valor3;
		printf("O consumo de energia da fabrica é : %.2f KwH.", resultado);
	}else if(consumo > 601 && consumo <=800){
		resultado = consumo * valor4;
		printf("O consumo de energia da fabrica é : %.2f KwH.", resultado);
	}else if(consumo > 800 ){
		resultado = consumo * valor5;
		printf("O consumo de energia da fabrica é : %.2f KwH.", resultado);
	}
	
	return 0;
}
