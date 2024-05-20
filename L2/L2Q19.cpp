#include<iostream>
using namespace std;

int main()
{
    int day;
    
    cout<<"Este algoritimo lehh um dia de 1 a 7, com ";
    cout<<"1 sendo domingo e 7 sendo sabahdo, e diz se ";
    cout<<"ele eh util ou eh feriado.";
    
    cout<<"\nEscreva um dia: ";
    
    cin>>day;
    
    if( day > 1 and day < 7)
    {
        cout<<"Este dia eh um dia util!";
    }
    else if( day == 1 or day == 7)
    {
        cout<<"Este dia eh um fim de semana!";
    }
    else
    {
        cout<<"Dia invahlido!";
    }
    return 0;
    system("Pause");
}