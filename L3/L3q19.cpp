/*19. Escreva um algoritmo que conte de 100 a 999 (inclusive) e exiba, um por linha, o produto dos três dígitos
dos números. Por exemplo, inicialmente o programa irá exibir:
100 = 0 (1*0*0)
101 = 0 (1*0*1)
102 = 0 (1*0*2)
(...)
110 = 0 (1*1*0)
111 = 1 (1*1*1)
112 = 2 (1*1*2)
(...)
999 = 9*9*9=729
Faça o seu algoritmo dar uma pausa a cada 20 linhas para que seja possível ver todos os números pouco
a pouco. Solicite que seja pressionada alguma tecla para ver a próxima sequência de números. */

#include <iostream>
using namespace std;

int main()
{
	int numero, linha, alg1, alg2, alg3;
	alg1 = 1; alg2 = alg3 = 0;
	linha = 0;
	
	for( numero = 100; numero <= 999; numero++ )
	{
		if( alg3 == 10 )
		{
			alg2++;
			alg3 = 0;
		}
		if( alg2 == 10 )
		{
			alg1++;
			alg2 = 0;
		}
		if( linha <= 20 )
		{
			int mult = alg1 * alg2 * alg3;
			cout << endl << numero << "=" << mult << "(" << alg1 << "*" << alg2 << "*" << alg3 << ")";
			alg3++;
			linha++;
		}
		else
		{
			cout << endl;
			linha = 0;
			numero--;
			system("Pause");
		}
	}
	
	cout << "\nFim de programa\n";
	system("Pause");
	return 0;
}
