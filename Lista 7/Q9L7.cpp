/*
9.	Crie um algoritmo para manipular vetores. O seu programa deve implementar 
uma fun��o chamada inverteVetor, que recebe como par�metro dois vetores V1 e V2, 
ambos de tamanho N. A fun��o deve copiar os elementos de V1 para V2 na ordem 
inversa. Ou seja, se a fun��o receber V1 = {1,2,3,4,5}, a fun��o deve copiar
os elementos para V2 na seguinte ordem: V2 = {5,4,3,2,1}. Al�m disso, a fun��o
tamb�m deve retornar o maior valor encontrado em V1. A fun��o deve possuir a
seguinte assinatura:
int inverteVetor(int *v1, int *v2, int n); Elabore um teste da fun��o no main.  
*/
#include <iostream>
using namespace std;

int inverteVetor( int* v1, int* v2, int n );

int main( int argc, char** argv )
{
	int n = 8;
	int v1[n] = { 0, 1, 2, 3, 4, 5, 6, 7 };
	int v2[n];
	int maior;
	
	maior = inverteVetor( v1, v2, n );
	
	cout << "\nv1----------------";
	for( int i = 0 ; i < n ; i++ )
	{
		cout << endl << v1[i];
	}
	
	cout << "\nv2----------------";
	for( int i = 0 ; i < n ; i++ )
	{
		cout << endl << v2[i];
	}
	cout << "\n\nMaior elemento de v1: " << maior;
	
	return 0;
}

int inverteVetor( int* v1, int* v2, int n )
{
	int maior = v1[0];
	for( int i = 0 ; i < n ; i++ )
	{
		v2[i] = v1[n-(i+1)];
		if( v1[i] > maior )
		{
			maior = v1[i];
		}
	}
	return maior;
}












