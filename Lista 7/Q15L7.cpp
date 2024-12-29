/*
15.	Considerando uma lista encadeada de valores inteiros definida pela
struct abaixo: 

struct noh{  
int valor;  
lista *pr�ximo;
};  
Noh meuNoh;  

Elabore um algoritmo que apresente o menu abaixo e execute as opera��es de acordo 
com a escolha do usu�rio.
-------------------------------------------------------  
					MENU PRINCIPAL 
-------------------------------------------------------  
1 � ADICIONAR ELEMENTO  
2 � REMOVER ELEMENTO  
3 � MOSTRAR TODOS OS ELEMENTOS  
4 � SAIR
-------------------------------------------------------  
Op��o 1: o algoritmo dever� ler um elemento inteiro, inseri-lo em um novo noh e 
adicion�-lo no fim da lista utilizando a fun��o adicionar que deve ser elaborada.
Op��o 2: o algoritmo dever� ler um elemento inteiro, busca-lo na lista e, caso seja
encontrado, remov�-lo utilizando a fun��o remover que deve ser elaborada.  
Op��o 3: o algoritmo dever� exibir todos os elementos da lista utilizando a fun��o 
relatorio que deve ser elaborada.  
*/
#include <iostream>
using namespace std;

struct noh
{
	int valor;
	noh* proximo;
};
noh* meuNoh;


void desenharMenu();
void adicionar( noh* no, int valor );
void remover( noh* no, int valor );
void listar( noh* no );


int main( int argc, char** argv )
{
	bool rodando = true;
	
	do
	{
		static short int escolha;
		
		system( "cls" );
		desenharMenu();
		cin >> escolha;
		
		switch( escolha )
		{
			case 1:
				system( "cls" );
				cout << "\n+----------------------+";
				cout << "\n|  Adicionar elemento  |";
				cout << "\n+----------------------+";
				cout << "\n|  ->Valor:  ";
				cin >> meuNoh->valor;
				adicionar( meuNoh, meuNoh->valor );
				break;
			case 2:
				break;
			case 3:
				system( "cls" );
				cout << "\n+----------------------+";
				cout << "\n|   Listar elementos   |";
				cout << "\n+----------------------+";
				listar( meuNoh );
				cout << "\n+----------------------+";
				break;
			case 4:
				rodando = false;
				break;
			default:
				break;
		}
		
		
	}while( rodando );
	
	
	cout << endl;
	cout << "\nFIM DO PROGRAMA\n";
	system( "pause" );
	return 0;
}

void adicionar( noh** no, int valor )
{
	noh* novoNo = new noh;
	novoNo->valor = valor;
	novoNo->proximo = 0;
	
	
	if( *no == 0 )
	{
		*no = novoNo;
	}
	else
	{
		noh* atual = *no;
		while( atual->proximo != 0 )
		{
			atual = atual->proximo;
		}
		atual->proximo = novoNo;
		//novoNo = atual;
	}
}
void listar( noh* no )
{
	noh* atual = no;
	while( atual != 0 )
	{
		cout << "\n|  no->valor:   " << atual->valor;
		atual = atual->proximo;
	}
	cout << "no->valor:   " << atual->valor;
}

void desenharMenu()
{
	cout << "\n+----------------------------------+";
	cout << "\n|          MENU PRINCIPAL          |";
	cout << "\n+----------------------------------+";
	cout << "\n|1 - ADICIONAR ELEMENTO            |";
	cout << "\n|2 - REMOVER ELEMENTO              |";
	cout << "\n|3 - MOSTRAR TODOS OS ELEMENTOS    |";
	cout << "\n|4 - SAIR                          |";
	cout << "\n+----------------------------------+";
	cout << "\n|<Escolha uma opcao-> ";
}








