#include<iostream>
using namespace std;

int main()
{
							//init code
	int code;
	float oldWage, newWage, increase;
	
	cout<<"\nTHIS ALGORITH MANAGES JOBS AND WAGES.";
	cout<<"\n\n\tPut your function(job) code: ";
	cin>>code;
	cout<<"\n\tPut the function wage(RS): ";
	cin>>oldWage;
	
	switch(code)
	{
		case 101:
			increase = 0.1;
			newWage = oldWage + oldWage*increase;
			
			cout<<"\n\n\tCode            - "<<code;
			cout<<"  \n\tFunction        - Manager";
			cout<<"  \n\tOld wage        - "<<oldWage<<" RS";
			cout<<"  \n\tIncrease        - "<<increase*100<<"%";
			cout<<"  \n\tNew wage        - "<<newWage<<" RS";
			cout<<"  \n\tWage diference  - "<<newWage - oldWage<<" RS\n\n";
		break;
		case 102:
			increase = 0.2;
			newWage = oldWage + oldWage*increase;
			
			cout<<"\n\n\tCode            - "<<code;
			cout<<"  \n\tFunction        - Engineer";
			cout<<"  \n\tOld wage        - "<<oldWage<<" RS";
			cout<<"  \n\tIncrease        - "<<increase*100<<"%";
			cout<<"  \n\tNew wage        - "<<newWage<<" RS";
			cout<<"  \n\tWage diference  - "<<newWage - oldWage<<" RS\n\n";
		break;
		case 103:
			increase = 0.3;
			newWage = oldWage + oldWage*increase;
			
			cout<<"\n\n\tCode            - "<<code;
			cout<<"  \n\tFunction        - Technician";
			cout<<"  \n\tOld wage        - "<<oldWage<<" RS";
			cout<<"  \n\tIncrease        - "<<increase*100<<"%";
			cout<<"  \n\tNew wage        - "<<newWage<<" RS";
			cout<<"  \n\tWage diference  - "<<newWage - oldWage<<" RS\n\n";
		break;
		default:
			increase = 0.4;
			newWage = oldWage + oldWage*increase;
			
			cout<<"\n\n\tCode            - "<<code;
			cout<<"  \n\tFunction        - Unknow";
			cout<<"  \n\tOld wage        - "<<oldWage<<" RS";
			cout<<"  \n\tIncrease        - "<<increase*100<<"%";
			cout<<"  \n\tNew wage        - "<<newWage<<" RS";
			cout<<"  \n\tWage diference  - "<<newWage - oldWage<<" RS\n\n";
	}
	system("Pause");
	return 0;
}