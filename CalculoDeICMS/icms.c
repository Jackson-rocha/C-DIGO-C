#include<stdio.h>

#define ICMS 0.18; //constante com diretiva de pré-processamento

int main(void){
	 const float frete = 10.50;
	 float preco_produto, valor_icms, valor_total;
	 
	 printf("Informe o valor do produto: ");
	 scanf("%f", &preco_produto);
	 
	 valor_icms = preco_produto * ICMS;
	 valor_total = preco_produto + valor_icms + frete;
	 
	 printf("Valor de imposto a ser pago: R$ %.2f\n", valor_icms);
	 printf("valor total a pagar: R$ %.2f", valor_total);
	 
	 return 0;
}
