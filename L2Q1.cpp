#include <iostream>
using namespace std;

int main()
{
    float a, b, c;
    cout<<"This program provides these inputs values and verify if it's a triangle and whitch triangles is it\n";
    cout<<"Put in sequence a, b and c values: ";
    cin>>a>>b>>c;
    
    if( a+b+c != 0)
    {
        cout<<"\n\n It's";
        if( a+b>c && b+c>a && a+c>b) // a, b and c forms a triangle.
        {
            //equilateral triangles.
            if( a==b && b==c) {cout<<" a equilateral triangle!";}
            
            //scaleno triangle.
            else if( a!=b && b!=c) {cout<<" a scaleno triangle!";}
            
            //isoceles triangles.
            else if( a==b && b!=c || a!=b) {cout<<" a isoceles triangle!";}
            else if( b==c && c!=a || b!=a) {cout<<" a isoceles triangle!";}
            else if( a==c && c!=b || a!=b) {cout<<" a isoceles triangle!";}
            
        }
        else
        {
            cout<<" not a triangle!";
        }
    }
    else
    {
        cout<<"\n\nPut a valid number...\n\n";
        main();
    }
    system("Pause");
}
