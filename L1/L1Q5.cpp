#include <iostream>
using namespace std;

int main()
{
 	float seconds, minutes, hours;

 	cout<<"Digite um valor em segundos: ";
 	cin>>seconds;

 	minutes = seconds/60;
 	hours = seconds/3600;

 	cout<<"\n"<<seconds<<"s eh igual a "<<minutes<<"min e "<<hours<<"hs";
	system("Pause");
}