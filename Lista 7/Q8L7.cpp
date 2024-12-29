/*
8.	Escreva uma fun��o que determine a m�dia e a situa��o de um
aluno em uma disciplina. A fun��o recebe como par�metros as tr�s
notas de um aluno (p1, p2, e p3), seu n�mero de faltas (faltas),
o n�mero total de aulas da disciplina (aulas) e o ponteiro para
uma vari�vel (media), conforme a seguinte assinatura:   
char situacao(float p1, float p2, float p3, int faltas,
				int aulas, float *media);
Na vari�vel indicada pelo ponteiro media, a fun��o deve armazenar
a m�dia do aluno, calculada como a m�dia aritm�tica das tr�s
provas. Al�m disso, a fun��o deve retornar um caractere indicando
a situa��o do aluno no curso, definido de acordo com o seguinte 
crit�rio:

*(Ver arquivo "Lista_7.pdf")*

	Em seguida, escreva a fun��o principal de um programa que
utiliza a fun��o anterior para determinar a situa��o de um aluno.
O programa deve:
	- Ler do teclado tr�s n�meros reais e dois n�meros inteiros,
representando as notas da p1, p2 e p3, o n�mero de faltas e o
n�mero de aulas, respectivamente;
	- Chamar a fun��o desenvolvida na primeira quest�o para
	determinar a m�dia e a situa��o do aluno na disciplina;
	- Exibir a m�dia (com apenas uma casa decimal) e a situa��o
do aluno, isto �, �APROVADO�, �REPROVADO� ou�REPROVADO POR
FALTAS�, dependendo do caractere retornado pela fun��o,
conforme a tabela acima.  
*/
#include <iostream>
#include <iomanip>
using namespace std;

char sit
(
	float p1,
	float p2,
	float p3,
	int faltas,
	int aulas,
	float* media
);

int main( int argc, char** argv )
{
	bool adcAluno = true;
	
	do
	{
		static float p1, p2, p3, media;
		static unsigned short int qtdFaltas, qtdAulas;
		static char situacao;
		
		system( "cls" );
		cout << "\nEscreva um numero menor que 0 em qualquer nota para sair\n";
		cout << "Escreva a nota 1: ";
		cin >> p1;
		cout << "Escreva a nota 2: ";
		cin >> p2;
		cout << "Escreva a nota 3: ";
		cin >> p3;
		cout << "\nEscreva o numero de aulas: ";
		cin >> qtdAulas;
		cout << "Escreva o numero de faltas: ";
		cin >> qtdFaltas;
		
		
		if( p1 < 0 || p2 < 0 || p3 < 0 )
			adcAluno = false;
		
		situacao = sit( p1, p2, p3, (int)qtdFaltas, (int)qtdAulas, &media );
		
		cout << "\n\nMedia do aluno: " << fixed << setprecision(1) << media;
		cout << "\nSituacao do aluno: ";
		if( situacao == 'A' )
			cout << "Aprovado";
		else if( situacao == 'R' )
			cout << "Reprovado";
		else
			cout << "Reprovado por faltas\n";
		
		cout << endl;
		system( "pause" );
		
	}while( adcAluno );
	
	return 0;
}

char sit
(
	float p1,
	float p2,
	float p3,
	int faltas,
	int aulas,
	float* media
)
{
	*media = ( (p1 + p2 + p3) / 3 );


	if( ( (float)faltas / aulas ) > 0.25f )
		return 'F';
	else if( ( (float)faltas / aulas ) <= 0.25f )
		return *media >= 6.0f? 'A': 'R';
}




