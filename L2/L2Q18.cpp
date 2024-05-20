#include<iostream>
using namespace std;

int main()
{
    float pchv; // pchv is purchaseValue
    float simf; // simf is simple fees
    int itms; //itms is installments
    char fchose, ichose;
    
    
    cout<<"This program read a purchase value, ";
    cout<<"installments and fees and show the ";
    cout<<"final value.";
    
    cout<<"\n\tPut your purchase value(RS): ";
    cin>>pchv;
    cout<<"\n\tYour purchase have installments(s or n)? ";
    cin>>ichose;
    
    if( ichose == 's')
    {
        cout<<"\tPut the installments: ";
        cin>>itms;
    }
    else if( ichose == 'n')
    {
        cout<<"\tYour purchase doens't have installments.";
        itms = 0;
    }
    
    cout<<"\n\tYour purchase have fees(s or n)? ";
    cin>>fchose;
    
    if( fchose == 's')
    {
        cout<<"\tPut the fees value: ";
        cin>>simf;
    }
    else if( fchose == 'n')
    {
        cout<<"\tYour purchase doens't have fees.";
        simf = 0;
    }
    cout<<"\n\n\tInstallments: "<<itms;
    cout<<"\n\tFees: "<<simf;
    if( itms > 0){
    cout<<"\n\tPrice in installments: "<<pchv/itms;}
    cout<<"\n\tFinal price of purchase: ";
    cout<<"RS "<<pchv + (pchv*itms)*simf/100;
    
    return 0;
    system("Pause");
}