#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

struct tipo_item{
	
	int cod;
	char nome[50];
	int qtd;
};

struct tipo_celula{
	
	struct tipo_item *item;
	struct tipo_celula *prox;
};

struct tipo_lista{
	
	struct tipo_celula *prim;
	struct tipo_celula *ultimo;
	int total;
};
void inserir (tipo_item *item){
	
	
}

void mostrar(tipo_item *item){
	
}

int main(){
setlocale(LC_ALL,"");
	struct tipo_item item;
	int op;
	
	do{
		system("cls");
		
		printf("\n----menu----");
		printf("\n(1) - Inserir");
		printf("\n(2) - Mostrar");
		printf("\n(3) - Pesquisar");
		printf("\n(4) - Inserir em uma posição");
		printf("\n(5) - Deletar um item");
		printf("\n(0) - Sair");
		printf("\n\nDigite uma opção: ");
		scanf("%d",&op);
	
	switch(op){
		case 0:
			exit(0);
		case 1:
			printf("\n----CHAMANDO FUNÇÃO INSERIR-----");
			printf("\nDigite o codigo do item: ");
			scanf("%d",&item.cod);
			printf("Digite o nome do item: ");
			scanf("%s",&item.nome);
			printf("Digite a qtd do item: ");
			scanf("%d",&item.qtd);
			break;
		case 2:
			printf("\n----CHAMANDO FUNÇÃO MOSTRAR-----");
			printf("\n\n------item--------");
			printf("Cod: %d",item.cod);
			printf("Item: %s", item.nome);
			printf("Qtd: %d", item.qtd);
			break;
	}
    }while(op!=0);
    

    return 0;
}
