#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

struct Retangulo{
	float altura;
	float largura;
} retangulo;
int area;
void medidas(){
	printf("Qual ser� a largura do ret�ngulo: ");
	scanf("%f", &retangulo.largura);
	printf("Qual ser� a altura do ret�ngulo: ");
	scanf("%f", &retangulo.altura);
}

void media(){
	area = retangulo.altura * retangulo.largura;
	
	printf("\n\nA �rea do ret�ngulo � : %d", area);
}

int main(){
	setlocale (LC_ALL,"portuguese");
	medidas();
	media();
}
