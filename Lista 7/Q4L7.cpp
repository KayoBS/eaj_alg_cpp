/*
4.	Escreva um programa que lê um valor inteiro (maior do que 1 e menor ou igual a 
10) e exibe a tabuada (até 10) de multiplicação do número lido. Você deverá escrever
as seguintes funções:

- int LeNumero(int n1,int n2)  
	Lê um número inteiro no intervalo especificado (n1, n2) e o retorna. Cada vez
que for digitado um número inválido (fora do intervalo especificado) a função deve
exibir a mensagem "Número inválido. Digite novamente!"

- void Tabuada( int n)  
	Recebe como parâmetro um número inteiro e exibe na tela a tabuada de multiplicação 
até 10 do número lido. Exemplo: número lido 5 
5 x 1 = 5  
5 x 2 = 10  
5. 
....  
5 x 10 = 50 */
#include <iostream>
using namespace std;

int LeNumero( int, int );
void Tabuada( int );

int main()
{
	int n;
	n = LeNumero( 2, 10 );
	Tabuada( n );
	
	return 0;
}


int LeNumero( int n1, int n2 )
{
	int numEscolhido;
	
	int num1, num2;
	
	if( n1 > n2 )
	{
		num1 = n1;
		num2 = n2;
	}
	else
	{
		num1 = n2;
		num2 = n1;
	}
	
	
	do
	{
		system( "cls" );
		cout << "\nDigite um numero no intervalo de "<< n1 << " a " << n2 << " : ";
		cin >> numEscolhido;
		if( numEscolhido > num1 || numEscolhido < num2 )
		{
			cout << "\nNumero invalido. digite novamente!\n";
			system( "pause" );
		}
	} while( numEscolhido > num1 || numEscolhido < num2 );
	return numEscolhido;
}

void Tabuada( int n )
{
	for( int i = 1 ; i <= 10 ; i++ )
	{
		cout << endl << n << " x " << i << " = " << ( n * i );
	}
}















