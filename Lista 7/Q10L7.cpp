/*
10.	Em seguida, utilizando o algoritmo anterior implemente outra função chamada 
multiplicaEscalar, que recebe como parâmetro dois vetores V1 e V2 (ambos de tamanho 
N), e um número inteiro X. A função deve multiplicar cada um dos elementos de V1
por X e armazenar os resultados em V2. A função deve possui a seguinte assinatura:
void multiplica_escalar(int *v1, int *v2, int x, int n);  
No main, utilize as funções inverteVetor e multiplicaEscalar para inverter um vetor
de tamanho 10 fornecido pelo usuário e em seguida multiplicar esse vetor por um
escalar também fornecido pelo usuário. Por último, o programa deverá exibir o
vetor resultante.
*/
#include <iostream>
using namespace std;

int inverteVetor( int* v1, int* v2, int n );
void multiplica_escalar(int *v1, int *v2, int x, int n);

int main( int argc, char** argv )
{
	const int n = 10;
	int x, maior;
	int v1[n], v2[n], vResult[n];
	
	cout << "\nDigite os elementos de v1[" << n << "]";
	for( int i = 0 ; i < n ; i++ )
	{
		cout << "\nDigite o elemento numero " << i << ":  ";
		cin >> v1[i];
	}
	
	maior = inverteVetor( v1, v2, n );
	
	cout << "\n\nv1[" << n << "] = { " << v1[0] << ", ";
	for( int i = 1 ; i < (n-1) ; i++ )
	{
		cout << v1[i] << ", ";
	}
	cout << v1[(n-1)] << " }";
	
	cout << "\nv2[" << n << "] = { " << v2[0] << ", ";
	for( int i = 1 ; i < (n-1) ; i++ )
	{
		cout << v2[i] << ", ";
	}
	cout << v2[(n-1)] << " }";
	cout << "\nMaior elemento de v1[" << n << "] = " << maior;
	
	
	cout << "\n\nDigite um numero x para multiplicar os elementos de v1: ";
	cin >> x;
	
	multiplica_escalar( v1, vResult, x, n );
	cout << "\nvResult[" << n << "] = { " << vResult[0] << ", ";
	for( int i = 1 ; i < (n-1) ; i++ )
	{
		cout << vResult[i] << ", ";
	}
	cout << vResult[(n-1)] << " }";
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
void multiplica_escalar( int *v1, int *v2, int x, int n )
{
	for( int i = 0 ; i < n ; i++ )
	{
		v2[i] = ( v1[i] * x );
	}
}













