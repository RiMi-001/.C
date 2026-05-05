#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	float C_produto[10], V_produto[10], rentabilidade; 
	int ordem = 1, i = 0, cat1 = 0, cat2= 0, cat3= 0;
    while(ordem < 11){
	printf("\nDigite o preço de compra da mercadoria %d: ", ordem);
	scanf("%f", &C_produto[i]);
	printf("Digite o preço de venda da mercadoria %d: ", ordem);
    scanf("%f", &V_produto[i]);	
	
	rentabilidade = V_produto[i]/C_produto[i];
	if(rentabilidade < 1.1){
		cat1++;
	}else if(rentabilidade >= 1.1 && rentabilidade <= 1.2){
		cat2++;
	}else{
		cat3++;
	}
    
	ordem++;
	i++;
	}
	printf("Produtos de baixa rentabilidade: %d\n\nProdutos de média rentabilidade: %d\n\nProdutos de alta rentabilidade: %d\n\n", cat1, cat2, cat3);
	return 0;
}
