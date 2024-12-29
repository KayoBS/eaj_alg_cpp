/*
7.	Escreva uma função chamada Troca que troque os valores
dos parâmetros recebidos. Essa função não deve ter retorno. 
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







