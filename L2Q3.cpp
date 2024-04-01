#include <iostream>
using namespace std;

int main()
{
    //init code
    char gender;
    float height;
    
    cout<<"This code verify whether your wheight is good acording your gender and height.";
    
    cout<<"\n\nPut your gender('m' for man and 'f' for whoman): ";
    cin>>gender;
    
    cout<<"\nPut your height in m: ";
    cin>>height;
    
    //code outputs
    if( gender == 'm')
    {
        float mIdealMass = (72.7*height) - 58;
        cout<<"\n\nYour ideal mass is "<<mIdealMass;
    }
    else if( gender == 'f')
    {
        float fIdealMass = (62.1*height) - 44.7;
        cout<<"\n\nYour ideal mass is "<<fIdealMass;
    }
    else
    {
        cout<<"\n\nERROR: your gender can't be diferent of 'm' or 'f'!\n\n\n";
        main();
    }
    system("Pause");
}
