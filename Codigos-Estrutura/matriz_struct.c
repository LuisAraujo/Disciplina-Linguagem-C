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

int show_usuario( struct usuario * m_usuario, int size);


int main(){
	
	struct usuario usuarios[10];
	clear_usuario( usuarios, 10 );
	cadastra_usuario(usuarios, 10);
	show_usuario(usuarios, 10);

  
}

int clear_usuario( struct usuario * m_usuario, int size){
	while(size){
			
		m_usuario->codigo = -1;
		
		m_usuario++;
		size--;
	}

}

int cadastra_usuario( struct usuario * m_usuario, int size){

	while(size){
			
		if(m_usuario->codigo == -1){
			
			puts("Informe o  codigo do usuario");
		    scanf("%d",  &m_usuario->codigo);
		    fflush(stdin);
		    
			puts("Informe o  nome do usuario");
			fgets( m_usuario->nome, sizeof(m_usuario->nome), stdin);
			
			puts("Informe o  cpf do usuario");
			fgets( m_usuario->cpf, sizeof(m_usuario->cpf), stdin);

			
			puts("Informe o  rg do usuario");
			fgets( m_usuario->rg, sizeof(m_usuario->rg), stdin);

			
			puts("Informe a data do usuario");
			puts("Dia 01-31");
			scanf("%d",  &m_usuario->data.dia);
			puts("Mes 01-12");
			scanf("%d",  &m_usuario->data.mes);
			puts("Ano");
			scanf("%d",  &m_usuario->data.ano);
			
			break;
	
		}
			
		m_usuario++;
		size--;
	}
	
}
		
int show_usuario( struct usuario * m_usuario, int size){
	
	while(size){
		if(m_usuario->codigo == -1){
		  	
			m_usuario++;	
			size--;
			continue;
		}
		puts("\n\nO codigo do usuario");
	    printf("%d\n", m_usuario->codigo);
	    
		puts("O nome do usuario");
		printf("%s\n", m_usuario->nome);
		
		puts("O cpf do usuario");
		printf("%s\n", m_usuario->cpf);
		
		puts("O rg do usuario");
		printf("%s\n", m_usuario->rg);
		
		puts("A data do usuario");
		printf("%d/%d/%d\n", m_usuario->data.dia,m_usuario->data.mes,  m_usuario->data.ano);
		
		m_usuario++;	
		size--;
	}
}
