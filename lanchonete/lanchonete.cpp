#include<stdio.h>

int main(void){
	int pedido;
	
	printf("Bem vindo a nossa lanchonete \n:");
	
	printf("\nDigite um numero para se pedir seu lanche :\n"); 
	
	printf("\n 1 Big Super Sanduba \n 2 Quase Super Sanduba \n 3 Micro Sandubinha\n");
	scanf("%d", &pedido);
	
	
	
	switch(pedido){
		case 1:
			printf("Sua opicao e 'Big Super Sanduba' com valor de de R$ 5,00 :");
			break;
		case 2 :
			printf("Sua opicao e 'Quase Super Sanduba' com valor de de R$ 3,00 :");
			break;
		case 3 :
			printf("Sua opicao e o 'Quase Super Sanduba' com valor de de R$ 1,50 :");
			break;				
	}
	
	
	return 0;
}
