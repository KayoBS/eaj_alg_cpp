#include<iostream>
using namespace std;

int main()
{						//init code
	int teacherLevel, classesPerWeek;
	float hours, minutes, wage;
	
	cout<<"\nThis program manages a wage of a teachers.\n";
	cout<<"\n\tPut the Level of teacher(1, 2 or 3): ";
	cin>>teacherLevel;
	cout<<"\tPut the class time( in minutes): ";
	cin>>minutes;
	cout<<"\tPut the number of classes per week: ";
	cin>>classesPerWeek;
	
	hours = minutes / 60;
	
	switch( teacherLevel)
	{
		case 1:
			wage = 12 * hours;
			cout<<"\n\n\tTeacher level: "<<teacherLevel;
			cout<<"\n\tTeacher working time( in hours): "<<hours;
			cout<<"\n\tTeacher wage per class: "<<wage;
			cout<<"\n\tTeacher wage per week: "<<wage * classesPerWeek;
			cout<<"\n\tTeacher wage per month: "<<wage * classesPerWeek * 4;
		break;
		case 2:
			wage = 17 * hours;
			cout<<"\n\n\tTeacher level: "<<teacherLevel;
			cout<<"\n\tTeacher working time( in hours): "<<hours;
			cout<<"\n\tTeacher wage per class: "<<wage;
			cout<<"\n\tTeacher wage per week: "<<wage * classesPerWeek;
			cout<<"\n\tTeacher wage per month: "<<wage * classesPerWeek * 4;
		break;
		case 3:
			wage = 25 * hours;
			cout<<"\n\n\tTeacher level: "<<teacherLevel;
			cout<<"\n\tTeacher working time( in hours): "<<hours;
			cout<<"\n\tTeacher wage per class: "<<wage;
			cout<<"\n\tTeacher wage per week: "<<wage * classesPerWeek;
			cout<<"\n\tTeacher wage per month: "<<wage * classesPerWeek * 4;
		break;
		default:
			cout<<"\n\n\tError: Invalid teacher level!";
		break;
	}
	system("Pause");
	return 0;
}