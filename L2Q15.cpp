#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float a, b, c, x1, x2, delta;
    
    cin>>a>>b>>c;
    
    if( a != 0)
    {
        delta = b*b -4*a*c;
        float r = 0;
        
        r = sqrt(delta);
        
        cout<<delta;
        cout<<"\n"<<r;
        
        if( delta < 0)
        {
            cout<<"\nNao existe raiz real!";
        }
        else if( delta == 0)
        {
            x1 = (-b+r) / (a*2);
            
            cout<<"\nHah uma raiz!\n";
            cout<<x1;
        }
        else
        {
            x1 = (-b+r) / (a*2);
            x2 = (-b-r) / (a*2);
            
            cout<<"\nHah duas raizes!\n";
            cout<<x1<<"\n"<<x2;
        }
    }
    else
    {
          cout<<"\nIsso nao eh uma equacao do segundo grau!";
    }
    return 0;
    system("Pause");
}
