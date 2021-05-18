//criando estruturas
#include <stdio.h>


//Exemplo 2 - usando nome para estrutura (declarando no escopo global)
struct usuario{
	
	int codigo;
	char nome;
	
};
	
	
int main(){
	//Exemplo 1 - sem usar nome para estrutura
	struct{
		
		int codigo;
		char nome[100];
		
	} usuario01, usuario02;
	
	//usando nome da estrutura para declarar
	struct usuario usuario03;
	
}

