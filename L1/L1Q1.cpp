#include<iostream>
using namespace std;
int main()
{
    int years, months, days;
    days = 1;
    
    cout<<"Report your age\n";
    
    cout<<"\nYears: ";
    cin>>years;
    
    cout<<"\nMonths: ";
    cin>>months;
    
    cout<<"\nDays: ";
    cin>>days;
    
    months = (months * 30);
    years = (years * 365);
    cout<<"Your age in days is: "<< days + months + years;
    system("Pause");
}
