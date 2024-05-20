#include <iostream>
using namespace std;

//this code verify the year of a car and  your price, dependinmg of the year

int main()
{
    //init code
    int year;
    float carPrice;
    
    cout<<"This program verify the year of a car and your year to aplicate the governal tax.";
    
    //middle code
    cout<<"\n\nPut the car year: ";
    cin>>year;
    
    cout<<"\nPut the car price: ";
    cin>>carPrice;
    
    //code outputs
    if( year<1990)
    {
        cout<<"\nThe car final price fabricated in "<<year<<"s is RS"<<carPrice+carPrice*0.01;
    }
    else if( year>=1990)
    {
        cout<<"\nThe car final price fabricated in "<<year<<"s is RS"<<carPrice+carPrice*0.015;
    }
    system("Pause");
}
