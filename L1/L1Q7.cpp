#include<iostream>
using namespace std;

int main()
{
	float celsius, fahrenheit;
	cout<<"\nInsert a C temperature to convert to F: ";
	cin>>celsius;
	fahrenheit = (celsius * 1.8) + 32;
	cout<<"\n"<<celsius<<"C = "<<fahrenheit<<"F";
	system("Pause");
}