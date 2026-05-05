#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	float C_produto[10], V_produto[10], rentabilidade; 
	int ordem = 1, i = 0;
    while(ordem < 11){
	printf("\nDigite o preço de compra da mercadoria %d: ", ordem);
	scanf("%f", &C_produto[i]);
	printf("Digite o preço de venda da mercadoria %d: ", ordem);
    scanf("%f", &V_produto[i]);	
	
	rentabilidade = V_produto[i]/C_produto[i];
	if()
    
	ordem++;
	i++;
	}
	return 0;
}
