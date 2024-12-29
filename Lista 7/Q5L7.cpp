/*
5.	Elaborar o algoritmo da calculadora utilizando funções. Implementar as
seguintes opções: soma, subtração, multiplicação e divisão.
*/
#include <iostream>
using namespace std;

double soma( double, double );
double subtracao( double, double );
double multiplicacao( double, double );
double divisao( double, double );

int main()
{
	bool rodando = true;
	
	do
	{
		static short int escolha;
	
		system( "cls" );
		cout << "CALCULADORA";
		cout << "\nSoma ------------ 1";
		cout << "\nSubtracao ------- 2";
		cout << "\nMultiplicacao --- 3";
		cout << "\nDivisao --------- 4";
		cout << "\nSAIR ------------ 5";
		
		do
		{
			cout << "\nDigite a sua escolha: ";
			cin >> escolha;
			
			if( escolha > 5 || escolha < 1 )
				cout << "\n\nEscolha invalida! digite novamente!";
			else
			{
				switch( escolha )
				{
					int n1, n2;
					
					case 1:
						cout << "\nDigite n1: ";
						cin >> n1;
						cout << "\nDigite n2: ";
						cin >> n2;
						
						cout << endl << n1 << " + " << n2 << " = " << soma(n1,n2);
						break;
					case 2:
						cout << "\nDigite n1: ";
						cin >> n1;
						cout << "\nDigite n2: ";
						cin >> n2;
						
						cout << endl << n1 << " - " << n2 << " = " << subtracao(n1,n2);
						break;
					case 3:
						cout << "\nDigite n1: ";
						cin >> n1;
						cout << "\nDigite n2: ";
						cin >> n2;
						
						cout << endl << n1 << " * " << n2 << " = " << multiplicacao(n1,n2);
						break;
					case 4:
						cout << "\nDigite n1: ";
						cin >> n1;
						cout << "\nDigite n2: ";
						cin >> n2;
						
						cout << endl << n1 << " * " << n2 << " = " << divisao(n1,n2);
						break;
					case 5:
						rodando = false;
						break;
					default:
						break;
				}
				cout << endl;
				system( "pause" );
			}
		}while( escolha > 5 || escolha < 1 );
	} while(rodando);
	
	return 0;
}

double soma( double n1, double n2 )
{
	return ( n1 + n2 );
}
double subtracao( double n1, double n2 )
{
	return ( n1 - n2 );
}
double multiplicacao( double n1, double n2 )
{
	return ( n1 * n2 );
}
double divisao( double n1, double n2 )
{
	return ( n1 / n2 );
}

