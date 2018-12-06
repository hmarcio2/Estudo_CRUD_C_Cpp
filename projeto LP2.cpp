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
		double area;
		char posicao[30];	
		char ativo;
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
void cadastrarApartamento(tApartamento N_apartamento[]){
	cout<<"Qual o titulo do anuncio"<<endl;
	cin>> N_apartamento->titulo; 	
	cout<<"Qual a rua"<<endl;
	cin>> N_apartamento->rua; 	
	cout<<"Qual o andar"<<endl;
	cin>> N_apartamento->andar; 	
	cout<<"Qual o valor do condominio"<<endl;
	cin>> N_apartamento->valor_condominio; 	
	cout<<"Quantas garagens"<<endl;
	cin>> N_apartamento->num_garagem; 	
	cout<<"Qual o numero de quartos"<<endl;
	cin>> N_apartamento->num_quartos; 	
	cout<<"Qual a area"<<endl;
	cin>> N_apartamento->area;	
	cout<<"Qual a posicao"<<endl;
	cin>> N_apartamento->posicao; 	
	N_apartamento->ativo = 'S'; 	
}	
void cadastrarCasa(){
}
void cadastrarTerreno(){
}

void consultarApartamento(tApartamento N_apartamento[]){
	int i;
    for (i=0 ; i<100 ; i++)
        if (N_apartamento[i].ativo) {
            cout << "\nTitulo: " << N_apartamento[i].titulo << endl;
            cout << "Rua: " << N_apartamento[i].rua << endl;
            cout << "Andar: " << N_apartamento[i].andar << endl;
            cout << "Valor condominio: " << N_apartamento[i].valor_condominio << endl;
            cout << "Numero de garagem: " << N_apartamento[i].num_garagem << endl;
            cout << "Numero de quartos: " << N_apartamento[i].num_quartos << endl;
            cout << "Area: " << N_apartamento[i].area << endl;
            cout << "Posicao: " << N_apartamento[i].posicao << endl; 
			getchar();           
        }
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
void editarImovel(){
}


void apagarApartamento(){
}	
void apagarCasa(){
}
void apagarTerreno(){
}

void salvarApartamentos(tApartamento lista[]){
	int escolha;
	cout<< "Deseja salvar?"<<endl;
	cout<<"(0) Sim"<<endl;
	cout<<"(1) Nao"<<endl;
	cin >> escolha;
	if (escolha==0){
		FILE* arq_apt = fopen("apartamento.txt", "w");
    if (arq_apt > 0) {
        fwrite(lista, 50, sizeof(tApartamento), arq_apt);
        fclose(arq_apt);
    }
    else
        cout << "Erro ao abrir o arquivo\n";
		cout<< "Alteracao salva"<<endl;
	}else{
		interface();
	}
}	

void salvarCasas(tCasa lista[]){

}
void salvarTerrenos(tTerreno lista[]){
}

void carregarApartamento(tApartamento N_apartamento[]) {
    FILE* arq_apt = fopen("apartamentos.txt", "rw");
    if (arq_apt > 0) {
        fread(N_apartamento, 50, sizeof(tApartamento), arq_apt);
        fclose(arq_apt);
    }
    else
        cout << "Erro ao abrir a listas de \n";
}

void carregarCasa(tCasa N_casa[]) {
    FILE* arq_cas = fopen("casas.txt", "rw");
    if (arq_cas > 0) {
        fread(N_casa, 50, sizeof(tCasa), arq_cas);
        fclose(arq_cas);
    }
    else
        cout << "Erro ao abrir a lista de casas\n";
}

void carregarTerreno(tTerreno N_terreno[]) {
    FILE* arq_ter = fopen("apartamentos.txt", "rw");
    if (arq_ter > 0) {
        fread(N_terreno, 50, sizeof(tTerreno), arq_ter);
        fclose(arq_ter);
    }
    else
        cout << "Erro ao abrir o arquivo para leitura\n";
}

int main(void){		
	tCasa N_casa[50];
	tApartamento N_apartamento[50];
	tTerreno N_terreno[50];		
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
						consultarApartamento(N_apartamento);
						
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
						cadastrarApartamento(N_apartamento);													
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
						//salvarArquivos();
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
						//salvarArquivos();
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

