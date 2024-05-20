#include <iostream>
using namespace std;

int main()
{
 	float factoryPriceNewCar;

 	cout<<"Algorimo para calcular o preco de um carro de acordo com\na porcentagem dos impostos e do distribuidor";

 	cout<<"\n\nDigite o preço de fabrica do carro: ";
 	cin>>factoryPriceNewCar;

 	float pDisX = 28.0/100; //Porcentagem da distribuidora.
 	float pImpX = 45.0/100; //Porcentagem de impostos.
 	float CarNewPrice = factoryPriceNewCar+(factoryPriceNewCar*pDisX)+(factoryPriceNewCar*pImpX);

 	cout<<"\nO valor de fabrica "<<factoryPriceNewCar<<" aplicado a "<<(pDisX*100)<<"%"<<" da distribuidora X e a "<<(pImpX*100)<<"%"<<"de impostos eh igual a ";
 	cout<<CarNewPrice;
	system("Pause");
}