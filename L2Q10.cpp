#include<iostream>
using std::cout;
using std::cin;

int main()
{
    float labPoint, SemExam, FinExam;
    cout<<"This program sum the points of a student, in the lab and semester and final exam,";
    cout<<"\nwith the respectve wheights: 2, 3 and 5.";
    cout<<"\n\nThe max point is 10.00\n";
    cout<<"\tPoint    < 3     -  student are reproved\n";
    cout<<"\tPoint > 3  <  5  -  student are in REC\n";
    cout<<"\tPoint    > 5     -  student are aproved\n";
    
    cout<<"\nPut the point of lab: ";
    cin>>labPoint;
    cout<<"\nPut the point of semaster exam: ";
    cin>>SemExam;
    cout<<"\nPut the point of final exam: ";
    cin>>FinExam;
    
    if(labPoint <= 10 and SemExam <= 10 and FinExam <= 10)
    {
        float FinalPoint = ( labPoint*2 + SemExam* 3 + FinExam*5)/10;
        cout<<"\n\nThe final point is "<<FinalPoint;
    
        if( FinalPoint < 3)
        {
            cout<<"\nStudent reproved!";
        }
        else if( FinalPoint >= 3 && FinalPoint < 5)
        {
            cout<<"\nStudent are in REC!";
        }
        else
        {
            cout<<"\nSrudent aproved";
        }
    }
    else
    {
        cout<<"\nERROR: invalid points";
    }
    system("Pause");
}
