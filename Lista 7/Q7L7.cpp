/*
7.	Escreva uma fun��o chamada Troca que troque os valores
dos par�metros recebidos. Essa fun��o n�o deve ter retorno. 
*/
#include <iostream>
using namespace std;

void Troca( int*, int* );

int main()
{
	int n1 = 10, n2 = -3;
	
	Troca( &n1, &n2 );
	
	cout << "\n Valor n1: " << n1;
	cout << "\n Valor n2: " << n2;
	
	return 0;
}

void Troca( int* n1, int* n2 )
{
	int n3 = *n1;
	
	*n1 = *n2;
	*n2 = n3;
}







