#include <iostream>
using namespace std;

int main()
{
    int pYear;
    float cigaretteNumberPerDay, cCigarette;

    cout<<"Calculo do gasto de um fumante por anos de uso, quantidade\n de cigarros por dia e preco da carteira\n";
    
    cout<<"\nAnos de uso do usuario: ";
    cin>>pYear;
    
    cout<<"\nCigarros fumados por dia(média ao longo dos anos): "; // cada carteira contêm 20 cigarros
    cin>>cigaretteNumberPerDay;
    
    cout<<"\nPreco da carteira de cigarros: ";
    cin>>cCigarette;
    cout<<"\n";
    
    cout<<"\nGasto total do fumante: RS "<<(pYear*365)*cigaretteNumberPerDay*(cigaretteNumberPerDay/20)*cCigarette;
    system("Pause");
}
