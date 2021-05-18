//criando estruturas
#include <stdio.h>


//Exemplo 2 - usando nome para estrutura (declarando no escopo global)
struct usuario{
	
	int codigo;
	char nome;
	
};
	
	
int main(){
	
	//Verificando tamanho da estrutura
	printf("size: %d", sizeof( struct usuario ) );

}

