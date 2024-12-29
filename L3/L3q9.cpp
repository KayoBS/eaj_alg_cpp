#include <iostream>
using namespace std;

int main()
{
	int mes, diaInicial, diaFinal, diaAtual, cont;
	do
	{
		system("cls");
		cout << "\nDigite um mes: ";
		cin >> mes;
		cout << "Digite em qual dia da semana comeca esse mes( dom - 1, seg - 2,... sab - 7): ";
		cin >> diaInicial;
		cout << "Digite em qual dia termina esse mes: ";
		cin >> diaFinal;
		
		diaAtual = diaInicial;
		
		if( mes <= 0 || mes > 12 || diaInicial > 7 || diaFinal > 31 || diaInicial <= 0 || diaFinal < 29 )
		{
			cout << "\nAs datas digitadas estao incorretas \nTente novamente\n";
			system("Pause");
		}
		
		cout << "\n\n\tDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n\t";
		for( int ct = 1 ; ct < diaInicial ; ct ++ )
		{
			cout << "\t";
		}
		for( cont = 1 ; cont <= diaFinal ; cont++ )
		{
			if( diaAtual == 7)
			{
				cout << cont << "\n\t";
				diaAtual = 1;
			}
			else
			{
				cout << cont << "\t";
				diaAtual++;
			}
		}
	}
	while( mes <= 0 || mes > 12 || diaInicial > 7 || diaFinal > 31 || diaInicial <= 0 || diaFinal < 29 ) ;
	
	cout << "\nfim de programa\n";
	system("Pause");
	return 0;
}
