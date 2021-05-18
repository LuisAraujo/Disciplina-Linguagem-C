/*Crie um código em C que permita o cadastro em memória principal de um cliente. 
Sobre o cliente pretende-se  saber o seu código, nome, o seu cpf, rg e data de 
nascimento [...]";*/

#include <stdio.h>
struct data{
	int dia, mes, ano;
};

struct usuario{
	int codigo;
	char nome[100], cpf[11], rg[10];
	struct data data;
};

int main(){
	
	struct usuario usuario02;
	usuario02.codigo = 10;
	
	//modo 1 de inicialização
	//struct usuario usuario01 = { 0001, {"Luis"},{"00000"}, {"00000"}, {"10/10/2020"} };
	
	//modo 2 de inicialização
	//struct usuario usuario01 = { .codigo = 0001, .nome = {"Luis"}, .rg = {"00001"}, .cpf = {"00002"}, .data = {"10/10/2020"} };
	
	//modo 3 de inicialização
    struct usuario usuario01 = { 
	codigo : 0002, 
	nome : {"Luis"}, 
	rg : {"00001"}, 
	cpf : {"00002"}, 
	data : { 
		dia: {"11"}, 
		mes: {"11"}, 
		ano: {"2020"} 
		}
	};
	
	
	puts("O codigo do usuario");
    printf("%d\n", usuario01.codigo);
    
	puts("O nome do usuario");
	printf("%s\n", usuario01.nome);
	
	puts("O cpf do usuario");
	printf("%s\n", usuario01.cpf);
	
	puts("O rg do usuario");
	printf("%s\n", usuario01.rg);
	
	puts("A data do usuario");
	printf("%s/%s/%s\n", usuario01.data.dia, usuario01.data.mes,  usuario01.data.ano);
	

  
}

