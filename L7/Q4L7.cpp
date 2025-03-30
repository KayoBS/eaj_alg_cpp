/*
4.	Escreva um programa que l� um valor inteiro (maior do que 1 e menor ou igual a 
10) e exibe a tabuada (at� 10) de multiplica��o do n�mero lido. Voc� dever� escrever
as seguintes fun��es:

- int LeNumero(int n1,int n2)  
	L� um n�mero inteiro no intervalo especificado (n1, n2) e o retorna. Cada vez
que for digitado um n�mero inv�lido (fora do intervalo especificado) a fun��o deve
exibir a mensagem "N�mero inv�lido. Digite novamente!"

- void Tabuada( int n)  
	Recebe como par�metro um n�mero inteiro e exibe na tela a tabuada de multiplica��o 
at� 10 do n�mero lido. Exemplo: n�mero lido 5 
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















