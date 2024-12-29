/*40. Elabore um algoritmo que mostre o menu abaixo referente a uma eleição
-----------------------------
 MENU ELEIÇÃO
-----------------------------
0 – Finalizar Votação
1 – Candidato 1
2 – Candidato 2
3 – Candidato 3
4 – Voto em branco
5 – Voto nulo
-----------------------------
Digite seu voto:
Leia os votos de todos os eleitores considerando as opções de voto listadas no menu e, ao final da eleição,
calcule e escreva o número total de votos, o número de votos por candidato, o total de votos brancos e
o total de votos nulos. Informe ainda se houve vencedor (votos do candidato > 50% do total de votos) e,
neste caso, o número do candidato que venceu. */

#include <iostream>
using namespace std;

int main()
{
	int escolhaTabl, vtsC1, vtsC2, vtsC3, vtsB, vtsN, vtsTotais;
	vtsC1 = vtsC2 = vtsC3 = vtsB = vtsN = 0;
	
	do
	{
		system("cls");
		cout << "\n-----------------------------";
		cout << "\n MENU ELEICAO";
		cout << "\n-----------------------------";
		cout << "\n0 - Finalizar Votacao";
		cout << "\n1 - Candidato 1";
		cout << "\n2 - Candidato 2";
		cout << "\n3 - Candidato 3";
		cout << "\n4 - Voto em branco";
		cout << "\n5 - Voto nulo";
		cout << "\n-----------------------------";
		cout << "\nDigite seu voto: ";
		cin >> escolhaTabl;
		
		switch( escolhaTabl )
		{
			case 1:
				vtsC1++;
				break;
			case 2:
				vtsC2++;
				break;
			case 3:
				vtsC3++;
				break;
			case 4:
				vtsB++;
				break;
			case 5:
				vtsN++;
				break;
			case 0:
			default:
				break;
		}
	}while( escolhaTabl != 0 );
	
	vtsTotais = vtsC1 + vtsC2 + vtsC3 + vtsB + vtsN;
	
	
	system("cls");
	cout << "\nNuhmero total de votos----------: " << vtsTotais;
	cout << "\nNuhmero de votos do candidato 1-: " << vtsC1;
	cout << "\nNuhmero de votos do candidato 2-: " << vtsC2;
	cout << "\nNuhmero de votos do candidato 3-: " << vtsC3;
	cout << "\nNuhmero de votos brancos--------: " << vtsB;
	cout << "\nNuhmero de votos nulos----------: " << vtsN << endl;
	
	if( vtsC1 != 0 || vtsC2 != 0 || vtsC3 != 0 || vtsB != 0 || vtsN != 0 )
	{
		if( (( vtsC1 * 100 ) / vtsTotais) > 50 )
		{
			cout << "\nHouve vencedor e foi o canditado de nuhmero 1";
		}
		else if( (( vtsC2 * 100 ) / vtsTotais) > 50 )
		{
			cout << "\nHouve vencedor e foi o canditado de nuhmero 2";
		}
		else if( (( vtsC3 * 100 ) / vtsTotais) > 50 )
		{
			cout << "\nHouve vencedor e foi o canditado de nuhmero 3";
		}
		else
		{
			cout << "\nNao houve vencedores, haverah segundo turno";
		}
	}
	
	cout << "\nFim de programa\n";
	system("Pause");
	return 0;
}







