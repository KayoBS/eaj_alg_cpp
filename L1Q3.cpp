#include <iostream>
using namespace std;

int main()
{
	float buyPrice;
	int installment;

	cout<<"Este algoritimo escreve o valor pago x por y pretacoes\n\n";

	cout<<"Indique o valor total das suas compras: ";
	cin>>buyPrice;
	cout<<"\nIndique o numero de pretacoes: ";
	cin>>installment;
 	if(installment != 0)
 	{
 		cout<<"\nVoce pagarah "<<buyPrice/installment<<" durante "<<installment<<" meses.";
 	}
 	else
 	{
 		cout<<"\nVoce pagarah "<<buyPrice<<" durante "<<installment<<" meses.";
 	}
	system("Pause");
}
