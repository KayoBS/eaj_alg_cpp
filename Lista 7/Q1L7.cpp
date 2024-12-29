/*
1.	Numa disciplina são dadas duas provas e dois trabalhos, mas amédia é calculada
considerando-se apenas a maior nota de prova e a maior nota de trabalho. Elabore um
algoritmo que, dadas as quatro notas de um aluno, informe a sua média. Para isso,
utilize duas funções: uma que determine o maior valor entre as notas (de provas ou
de trabalhos) e outra que calcule a média aritmética das duas maiores notas.
*/ 
#include <iostream>
using namespace std;

float retMaior( float, float );
float retMedia( float, float );

int main()
{
	float p1, p2, t1, t2;
	
	cout << "\nDigite a nota da primeira prova: ";
	cin >> p1;
	cout << "\nDigite a nota da segunda prova: ";
	cin >> p2;
	cout << "\nDigite a nota do primeiro trabalho: ";
	cin >> t1;
	cout << "\nDigite a nota do segundo trabalho: ";
	cin >> t2;
	
	cout << "\n\nMaior nota das provas: " << retMaior( p1, p2 );
	cout << "\nMaior nota dos trabalhos: " << retMaior( t1, t2 );
	cout << "\n\nMedia das provas: " << retMedia( p1, p2 );
	cout << "\nMedia dos trabalhos: " << retMedia( t1, t2 );
	cout << "\nMedia valida: " << retMedia( retMaior(p1, p2), retMedia(t1, t2) );
	return 0;
}

float retMaior( float n1, float n2 )
{
	if( n1 >= n2 )
		return n1;
	else
		return n2;
}
float retMedia( float n1, float n2 )
{
	return ( ( n1 + n2 ) / 2 );
}
