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

//muda o ponteiro para o px elemento
struct usuario matriz_usu[10];
struct usuario* usu01_p = matriz_usu;

//muda o ponteiro para o px elemento
++usu01_p;

//add 1 ao cpf
++usu01_p->codigo;

//add 1 ao cpf
usu01_p->codigo++;

//muda o ponteiro para o px elemento e acesso o codigo
(usu01_p++)->codigo;

//acesso o codigo e muda o ponteiro para o px elemento 
(usu01_p->codigo) ++;

}


