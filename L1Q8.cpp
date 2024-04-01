#include<iostream>
using namespace std;

int main()
{
	cout<<"This algorithm converts an dollar value to the brazilian real...\n";
	
	float dollar, dollPrice, real;
	
	cout<<"\nSet an dollar value: ";
	
	cin>>dollar;
	cout<<"\nSet the current dollar price: ";
	
	cin>>dollPrice;
	real = dollar * dollPrice;
		
	cout<<"\nThe dollar value converted to real, considering the\ndollar price, is: "<<real;
	system("Pause");
}