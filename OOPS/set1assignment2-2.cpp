#include <iostream>
using namespace std;
class emp{
	int a;
	public:
		void getdata(){
			cin>>a;
		}
	void display();
};
void emp::display(){
	cout<<"Salary is "<<a;
}
int main()
{
	emp e1;
	cout <<"Enter the salary: ";
	e1.getdata();
	e1.display();
	return 0;
}

