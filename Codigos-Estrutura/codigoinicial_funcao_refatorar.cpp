/*Crie um c�digo em C que permita o cadastro em mem�ria principal de um cliente. 
Sobre o cliente pretende-se  saber o seu c�digo, nome, o seu cpf, rg e data de 
nascimento [...]";*/

#include <stdio.h>

	
int main(){
	
	int codigo;
	char nome[100], cpf[11], rg[10], data[10];
	
	puts("Informe o codigo do usuario");
	scanf("%d", &codigo);
	fflush(stdin);
	puts("Informe o nome do usuario");
	fgets(nome, sizeof(nome), stdin);

	puts("Informe o cpf do usuario");
	fgets(cpf,sizeof(cpf), stdin);
	
	puts("Informe o rg do usuario");
	fgets(rg, sizeof(rg),stdin);
	
	puts("Informe o data do usuario");
	fgets(data, sizeof(data),stdin);
	

  
}

