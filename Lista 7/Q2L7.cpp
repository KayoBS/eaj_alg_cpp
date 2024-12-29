/*
2.	Faça uma função que recebe um número inteiro por parâmetro e retorna 
verdadeiro se ele for par e falso se for ímpar.
*/
#include <iostream>
using namespace std;

bool ehPar( int );

int main()
{
	int num;
	
	cout << "\nDigite um numero inteiro: ";
	cin >> num;
	
	cout << "\nEh par? ";
	ehPar( num )?
		cout << "Sim":
		cout << "Nao";
	
	return 0;
}

bool ehPar( int num )
{
	if( num % 2 == 0)
		return 1;
	else
		return 0;
}
