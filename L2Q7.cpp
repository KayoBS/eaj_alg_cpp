#include<iostream>
using namespace std;

int main()
{
	//init code
	//Amt is "Amount", sdw is "sandwich, drk is "drink", P is "price"
	int sdwAmt, drkAmt, sdwCode, drkCode;
	float sdwP, drkP, finalP;
	
	cout<<"THIS PROGRAM MANAGES A RESTAURANT FOOD REQUESTS";
	cout<<"\nWhat do you want?";
	//sandwiches
	cout<<"\n\nSandwiches:\n\tCode |   Description    | Unit price";
	cout<<"\n\t100   hot dog             1,10 \n\t101   Simple bauruh       1,30 ";
	cout<<"\n\t102   Bauruh with egg	  1,50 \n\t103   Hamburger           1,10 ";
	cout<<"\n\t104   Cheesburger         1,30";
	//drinks
	cout<<"\n\nDrinks:\n\tCode |   Description    | Unit price";
	cout<<"\n\t105   Soft drink          1,00 \n\t106   Juice               2,00 ";
	cout<<"\n\t107   Nescau              1,50";
	
	//inputs code
	cout<<"\n\nChose the sandwich(sandwich code): ";
	cin>>sdwCode;
	cout<<"How many? ";
	cin>>sdwAmt;
	
	cout<<"\nChose the drink(drink code): ";
	cin>>drkCode;
	cout<<"How many? ";
	cin>>drkAmt;
	
	//outputs Code
	if( sdwCode == 100)
	{
		sdwP = 1.10;
		cout<<"\n\nYou bought "<<sdwAmt<<" hot dogs";
	}
	else if( sdwCode == 101)
	{
		sdwP = 1.30;
		cout<<"\n\nYou bought "<<sdwAmt<<" Simple bauruh";
	}
	else if( sdwCode == 102)
	{
		sdwP = 1.50;
		cout<<"\n\nYou bought "<<sdwAmt<<" Bauruh with egg";
	}
	else if( sdwCode == 103)
	{
		sdwP = 1.10;
		cout<<"\n\nYou bought "<<sdwAmt<<" Hamburgesr";
	}
	else if( sdwCode == 104)
	{
		sdwP = 1.30;
		cout<<"\n\nYou bought "<<sdwAmt<<" Cheesburgers";
	}
	else
	{
		cout<<"\n\nThis code does not exist!";
	}
	
	if( drkCode == 105)
	{
		drkP = 1.00;
		cout<<" And "<<drkAmt<<" Soft drinks";
	}
	else if( drkCode == 106)
	{
		drkP = 2.00;
		cout<<" And "<<drkAmt<<" Juice glasses";
	}
	else if( drkCode == 107)
	{
		drkP = 1.50;
		cout<<" And "<<drkAmt<<" Nescau glasses";
	}
	else
	{
		cout<<"\n\nThis code does not exist!";
	}
	finalP = (sdwP*sdwAmt)+(drkP*drkAmt);
	cout<<"\nThe final price is "<<finalP;
	
	cout<<"\n";
	system("Pause");
}
