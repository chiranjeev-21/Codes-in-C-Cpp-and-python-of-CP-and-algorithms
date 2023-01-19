#include <iostream>
using namespace std;
struct student{
	private:
	char Name[30];
	int Roll;
	int marks;
	public:
	void setStudentData()
{
	cout <<"Enter the information"<<endl;
	cin>>Name>>Roll>>marks;
	cout<<endl;
}
void getStudentData()
{
	cout<<"Name: "<<Name<<endl<<"Roll Number: "<<Roll<<endl<<"Marks: "<<marks<<endl;
}

}s[3];
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
