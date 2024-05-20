#include <iostream>
using namespace std;
int main()
{
	int N;
	float p;

 	cout<<"Codigo para descorir a percentual p de um numero natural N\n";

	cout<<"Digite um numero inteiro: ";
 	cin>>N;
 	cout<<"\ndigite o percentual que deseja: ";
 	cin>>p; cout<<"%\n\n";

 	cout<<p<<"%"<<" de "<<N<<" corresponde a "<<N*(p/100)<<".";
	system("Pause");
}