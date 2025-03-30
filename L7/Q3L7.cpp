/*
3.	Escreva uma função que recebe 2 números inteiros n1 e n2 como entrada e 
retorna a soma de todos os números inteiros contidos no intervalo [n1,n2]. Use esta 
função em um programa que lê n1 e n2 do usuário e imprime a soma. 
*/
#include <iostream>
using namespace std;

int soma( int, int );

int main()
{
	int n1, n2;
	cout << "\nEscreva n1: ";
	cin >> n1;
	cout << "\nEscreva n2: ";
	cin >> n2;
	cout << "\nSoma de todos os numeros entre n1 e n2: " << soma(n1, n2);
	
	return 0;
}

int soma( int n1, int n2 )
{
	int resultado = 0;
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
	
	if( (num1 - num2) > 0 )
	{
		for( num2 = (num2 + 1) ; num2 < num1 ; num2++ )
		{
			resultado += num2;
		}
	}
	else
		resultado = 0;
	return resultado;
}











