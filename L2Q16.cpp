#include <iostream>
using namespace std;

int main()
{
    int age;
    
    cout<<"This algorithm checks whether you can drive!";
    cout<<"\nPut your age: ";
    cin>>age;
    
    if( age > 0)
    {
        if( age < 18)
        {
            cout<<"\nYou can't drive!";
            cout<<" "<<18-age<<" years left";
        }
        else
        {
            cout<<"\nYou can drive!";
        }
    }
    else
    {
        cout<<"\nERROR: put valid numbers!";
    }
    
    return 0;
}