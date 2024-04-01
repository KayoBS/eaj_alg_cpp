#include<iostream>
using namespace std;

int main()
{
	cout<<"\nAlgorithm to invert two variables\n";
	
	int Val1, Val2, inter;
	
	cout<<"\nVal1 value: ";
	cin>>Val1;
	
	cout<<"\nVal2 value: ";
	cin>>Val2;
	
	cout<<"\n"<<"Val1 - "<<Val1<<"\n"<<"Val2 - ";
	cout<<Val2<<"\n\nINVERTED:\n";
	
	inter = Val1;
	Val1 = Val2;
	Val2 = inter;

	cout<<"\n"<<"Val1 - "<<Val1;
	cout<<"\n"<<"Val2 - "<<Val2;
	system("Pause");
}