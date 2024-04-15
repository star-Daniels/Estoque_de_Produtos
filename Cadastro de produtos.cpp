#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 100

struct Produto{
	char nome[40];
	int estoque;
	float preco;
} produtos[TAM];

int code=0;

bool cadastroVazio (){
	
	if(code == 0 ){
		return true;
	}
}

void CadastroProduto(){
	if(code == TAM){
		printf("Cadastro Lotado");
	} else{
		printf("Informe o valor do produto: ");
		scanf("f", &Produto[code].preco);
		printf("Informe o nome do produto: ");
		scanf("s", Produto[code].nome);
		printf("Informe a quantidade de estoque do produto: ");
		scanf("d", &Produto[code].estoque);
		
	}
}

void BuscaProduto(){
	
	printf("Informe O nome do produto");
	
}

void controle (int escolha){
	switch(escolha){
		case 0:
			abort();
			break;
		case 1:
			printf("|-------------Cadastrar Produto------------|\n");
			CadastrarProduto();
			break;
		case 2:
			printf("|-------------Buscar Produto------------|\n");
			//BuscarProduto();
			break;
		case 3:
			printf("|-------------Listar Produtos------------|\n");
			//ListarProduto();
			break;
		default
		printf("Opção invalida");
		
			
			
	}
}

int main (){
	setlocale(LC_ALL, "portuguese");
	
	while(true){
		printf("");
		printf("| 0- Encerrar Sistema         |\n");
		printf("| 1- Cadastrar Produto        |\n");
		printf("| 2- Buscar Produto           |\n");
		printf("| 3- Listar todos os Produtos |\n");
		printf("|-----------------------------|\n\n");
		printf("--> Escolha uma opção: ");
		scanf("%d", &escolha);
		
		system ("cls");
		controle(escolha);
		
	}
}
