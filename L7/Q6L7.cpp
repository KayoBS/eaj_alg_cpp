/* 
6.	Elaborar um algoritmo que leia um vetor de 10 posi��es de inteiros
e chame uma fun��o MinMax. Esta fun��o deve receber o vetor lido e,
por refer�ncia, duas vari�veis inteiras, min e max. O objetivo da
fun��o � buscar os valores do menor e maior elementos do vetor e
atribuir �s vari�veis min e max respectivamente. 
*/

#include <iostream>
using namespace std;


const unsigned short int tv = 10; //Tamanho vetor
void MinMax( int vet[], unsigned short int, int*, int* );

int main()
{
	int vet[] = { 2, 3, 4, -4, 1, 10, 7, 6, 137, 0 };
	int min, max;
	
	MinMax( vet, tv, &min, &max );
	
	cout << "\nMinimo: " << min;
	cout << "\nMaximo: " << max;	
}

void MinMax( int vet[], unsigned short int t, int* min, int* max )
{
	*min = *max = vet[0];
	for( int i = 1 ; i < t ; i++ )
	{
		
		if( *min > vet[i] )
			*min = vet[i];
			
		if( *max < vet[i] )
			*max = vet[i];
	}
}








