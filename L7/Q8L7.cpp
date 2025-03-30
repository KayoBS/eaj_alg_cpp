/*
8.	Escreva uma função que determine a média e a situação de um
aluno em uma disciplina. A função recebe como parâmetros as três
notas de um aluno (p1, p2, e p3), seu número de faltas (faltas),
o número total de aulas da disciplina (aulas) e o ponteiro para
uma variável (media), conforme a seguinte assinatura:   
char situacao(float p1, float p2, float p3, int faltas,
				int aulas, float *media);
Na variável indicada pelo ponteiro media, a função deve armazenar
a média do aluno, calculada como a média aritmética das três
provas. Além disso, a função deve retornar um caractere indicando
a situação do aluno no curso, definido de acordo com o seguinte 
critério:

*(Ver arquivo "Lista_7.pdf")*

	Em seguida, escreva a função principal de um programa que
utiliza a função anterior para determinar a situação de um aluno.
O programa deve:
	- Ler do teclado três números reais e dois números inteiros,
representando as notas da p1, p2 e p3, o número de faltas e o
número de aulas, respectivamente;
	- Chamar a função desenvolvida na primeira questão para
	determinar a média e a situação do aluno na disciplina;
	- Exibir a média (com apenas uma casa decimal) e a situação
do aluno, isto é, “APROVADO”, “REPROVADO” ou“REPROVADO POR
FALTAS”, dependendo do caractere retornado pela função,
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




