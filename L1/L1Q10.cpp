#include<iostream>
using namespace std;

int main()
{
	int A, B;
	bool C, D;

	cout<<"\nChose values to the integers A and B\n";
	cout<<"\nA: ";cin>>A;
	cout<<"\nB: ";cin>>B;

	cout<<"\nA+B = "<<(A + B);
	cout<<"\nA-B = "<<(A - B);
	cout<<"\nAxB = "<<(A * B);
	cout<<"\nA/B = "<<(A / B);


	cout<<"\n\nChose values to the booleans C and D\n";
	cout<<"\n\nC:";cin>>C;
	cout<<"\nD:"; cin>>D;

	cout<<"\n!C = "<<!C;
	cout<<"\n!D = "<<!D;
	cout<<"\nCxD = ";

	cout<<C*D;
	cout<<"\nC+D = ";

	if(C == 1 || D == 1)
	{
		cout<<true;
	}
	else
	{
		cout<<false<<"\n";
	}
	system("Pause");
}