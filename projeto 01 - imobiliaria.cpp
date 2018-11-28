#include <stdio.h>
#include <string.h>


	typedef struct apartamento{
		char titulo[51];
		char rua[101];
		int andar;
		int valor_condominio;
		int num_garagem;
		int num_quartos;		
		double area_total;
		double area_construida;	
	}TApartamento;
	
	typedef struct{
		char titulo[51];
		char rua[101];
		int num_quartos;
		int num_pavimentos;
		double area_total;
		double area_construida;		
	}TCasa;
	
	typedef struct{
		char titulo[51];
		int area;		
	}TTerreno;



int main(void){		
	int N_casas[50];
	int N_apartamento[50];
	int N_terreno[50];
	
	printf("=================================== Menu ===================================\n");
	printf("(1) Cosultar imovel                               ==========================\n");
	printf("(2) Cadastrar imovel                              ==========================\n");
	printf("(3) Deletar imovel                                ==========================\n");	
	
	
	
	return 0;
}

