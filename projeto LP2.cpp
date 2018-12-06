#include <string.h>
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

	typedef struct apartamento{
		char titulo[51];		
		char rua[101];
		int andar;
		int valor_condominio;
		int num_garagem;
		int num_quartos;		
		double area_total;
		double area_construida;	
	}tApartamento;
	
	typedef struct casa{
		char titulo[51];
		char rua[101];
		int num_quartos;
		int num_pavimentos;
		double area_total;
		double area_construida;		
	}tCasa;
	
	typedef struct terreno{
		char titulo[51];
		int area;		
	}tTerreno;

int interface(){
	system("cls");
	int menu;
	cout << ("=================================== Menu ===================================\n") << endl;
	cout << ("(1) Cosultar imovel                               ==========================\n") << endl;
	cout << ("(2) Cadastrar imovel                              ==========================\n") << endl;
	cout << ("(3) Deletar imovel                                ==========================\n") << endl;	
	cout << ("(4) Salvar                                        ==========================\n") << endl;	
	cout << ("(0) Sair                                          ==========================\n") << endl;	
	cin >> menu;	
	system("cls");
	return menu;
}
void cadastrarApartamento(){
}	
void cadastrarCasa(){
}
void cadastrarTerreno(){
}

void consultarApartamento(){
	//por titulo
	//por bairro
	//por valor
	//para vender
	//para alugar
}	
void consultarCasa(){
	//por titulo
	//por bairro
	//por valor
	//para vender
	//para alugar
}
void consultarTerreno(){
	//por titulo
	//por bairro
	//por valor	
	//para vender
	//para alugar
}
void editar_imovel(){
}


void apagarApartamento(){
}	
void apagarCasa(){
}
void apagarTerreno(){
}

void salvarArquivos(){
}



void lerApartamento(tApartamento N_apartamento[]) {
    FILE* arq_apt = fopen("apartamentos.txt", "rw");
    if (arq_apt > 0) {
        fread(N_apartamento, 50, sizeof(tApartamento), arq_apt);
        fclose(arq_apt);
    }
    else
        cout << "Erro ao abrir a listas de \n";
}

void lerCasa(tCasa N_casa[]) {
    FILE* arq_cas = fopen("casas.txt", "rw");
    if (arq_cas > 0) {
        fread(N_casa, 50, sizeof(tCasa), arq_cas);
        fclose(arq_cas);
    }
    else
        cout << "Erro ao abrir a lista de casas\n";
}

void lerTerreno(tTerreno N_terreno[]) {
    FILE* arq_ter = fopen("apartamentos.txt", "rw");
    if (arq_ter > 0) {
        fread(N_terreno, 50, sizeof(tTerreno), arq_ter);
        fclose(arq_ter);
    }
    else
        cout << "Erro ao abrir o arquivo para leitura\n";
}

int main(void){		
	int N_casa[50];
	int N_apartamento[50];
	int N_terreno[50];		
	int menu = 0; 
		
	menu = interface();
	
	switch (menu){	
		case 1:{
			system("cls");
			cout << ("=================================== Menu ===================================\n") << endl;
			cout << ("(1) Cosultar apartamentos                         ==========================\n") << endl;
			cout << ("(2) Cosultar casas                                ==========================\n") << endl;
			cout << ("(3) Cosultar terrenos                             ==========================\n") << endl;			
			cout << ("(0) Voltar                                        ==========================\n") << endl;	
			cin >> menu;			
				switch (menu) {
					case 1:	
					{
						consultarApartamento();
						break;
					}
					case 2:
					{
						consultarCasa();
						break;
					}
					case 3:
					{
						consultarTerreno();
						break;
					}
					case 0:
					{
						interface();						
					}
					default:
					{
						cout << "Digite uma opção válida" << endl;
		
					}								
					break;
				}
		}
		case 2:
		{	system("cls");
			cout << ("=================================== Menu ===================================\n") << endl;
			cout << ("(1) Cadastrar apartamentos                         ==========================\n") << endl;
			cout << ("(2) Cadastrar casas                                ==========================\n") << endl;
			cout << ("(3) Cadastrar terrenos                             ==========================\n") << endl;
			cout << ("(4) Salvar                                         ==========================\n") << endl;	
			cout << ("(0) Voltar                                         ==========================\n") << endl;	
			cin >> menu;
			
				switch (menu){
					case 1:
					{	
						cadastrarApartamento();							
						break;
					}
					case 2:
					{
						cadastrarCasa();	
						break;
					}
					case 3:
					{
						cadastrarTerreno();	
						break;
					}
					case 4:
					{
						salvarArquivos();
						break;
					}
					case 0:
					{
						interface();
					}
					default:
					{
						cout << "Digite uma opção válida" << endl;
				
					}								
					break;
				}
			break;
		}
		case 3:
		{	system("cls");
			cout << ("=================================== Menu ===================================\n") << endl;
			cout << ("(1) Apagar apartamentos                         ==========================\n") << endl;
			cout << ("(2) Apagar casas                                ==========================\n") << endl;
			cout << ("(3) Apagar terrenos                             ==========================\n") << endl;
			cout << ("(4) Salvar                                       ==========================\n") << endl;	
			cout << ("(0) Voltar                                       ==========================\n") << endl;
			cin >> menu;
			
				switch (menu){				
					case 1:
					{	
						apagarApartamento();							
						break;
					}
					case 2:
					{
						apagarCasa();
						break;
					}
					case 3:
					{
						apagarTerreno();
						break;
					}
					case 4:
					{
						salvarArquivos();
						break;
					}
					case 0:
					{
						interface();
						break;
					}
					default:
					{
						cout << "Digite uma opção válida" << endl;					
					}						
				}
			break;
		}
		case 4:
		{
			void SalvarArquivos();
			break;
		}
		case 0:
		{
			return 0;				
		}		
		default:
		{
			cout << "Digite uma opção válida" << endl;
		}	
	}
	return 0;
}

