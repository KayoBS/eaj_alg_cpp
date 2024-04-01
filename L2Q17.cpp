#include<iostream>
using namespace std;

int main()
{
    int age;
    
    cout<<"This program checks whether your age is an ";
    cout<<"even multiple of 10 of no and whether an odd ";
    cout<<"multiple of 5 or non";
    
    cout<<"\n\tPut your age ";
    cin>>age;
    
    if( age%2 == 0)
    {
        if( age%10 == 0)
        {
            cout<<"\nYour age is a even multiple of 10!";
        }
        else
        {
            cout<<"\nYour age is even!";
        }
    }
    else
    {
        if( age%5 == 0)
        {
            cout<<"\nYour age is an odd multiple of 5!";
        }
        else
        {
            cout<<"\nYour age is odd!";
        }
    }
}