/*Crie um código em C que permita o cadastro em memória principal de um cliente. 
Sobre o cliente pretende-se  saber o seu código, nome, o seu cpf, rg e data de 
nascimento [...]";*/

#include <stdio.h>

struct usuario{
	int codigo;
	char nome[100], cpf[11], rg[10], data[10];
};

int main(){
	
	struct usuario usuario01; 
	
	puts("Informe o codigo do usuario");
	scanf("%d", &usuario01.codigo);
	fflush(stdin);
	
	puts("Informe o nome do usuario");
	fgets(usuario01.nome, sizeof(usuario01.nome), stdin);

	puts("Informe o cpf do usuario");
	fgets(usuario01.cpf,sizeof(usuario01.cpf), stdin);
	
	puts("Informe o rg do usuario");
	fgets(usuario01.rg, sizeof(usuario01.rg),stdin);
	
	puts("Informe o data do usuario");
	fgets(usuario01.data, sizeof(usuario01.data),stdin);
	

  
}

