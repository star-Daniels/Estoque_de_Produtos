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
	printf("Qual será a largura do retângulo: ");
	scanf("%f", &retangulo.largura);
	printf("Qual será a altura do retângulo: ");
	scanf("%f", &retangulo.altura);
}

void media(){
	area = retangulo.altura * retangulo.largura;
	
	printf("\n\nA área do retângulo é : %d", area);
}

int main(){
	setlocale (LC_ALL,"portuguese");
	medidas();
	media();
}
