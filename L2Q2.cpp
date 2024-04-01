#include <iostream>
using namespace std;

int main()
{
    //init code
    int n; //number n
    cout<<"This algorithm tells whether a number is even or greater or less tan 100";
    cout<<"  and whether it's odd positive or negative\n";
    
    //middle code
    cout<<"\nPut a number(integer): ";
    cin>>n;
    
    //code outputs
    if( n%2 == 0)
    {
        if(n < 100)
        { cout<<"Your number is a less tan 100 even number.";}
        
        else if(n > 100)
        { cout<<"Your number is a greater tan 100 even number.";}
        
        else
        { cout<<"Your number is 100";}
    }
    else
    {
        if( n<0)
        { cout<<"Your number is a negative odd number";}
        
        else
        { cout<<"Your number is a positive odd number";}
    }
    system("Pause");
}
