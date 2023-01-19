#include <iostream>
using namespace std;
class student{
	char Name[30];
	int Roll;
	int marks;
	public:
		void setStudentData();
		void getStudentData();
}s[3];
void student :: setStudentData()
{
	cout <<"Enter the information"<<endl;
	cin>>Name>>Roll>>marks;
	cout<<endl;
}
void student :: getStudentData()
{
	cout<<"Name: "<<Name<<endl<<"Roll Number: "<<Roll<<endl<<"Marks: "<<marks<<endl;
}
int main()
{
	for (int i=0;i<3;i++){
	s[i].setStudentData();
	}
	for (int i=0;i<3;i++){
	s[i].getStudentData();
}
	return 0;
}
