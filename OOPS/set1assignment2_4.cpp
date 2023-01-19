#include<iostream>
using namespace std;
class emp{
	public:
		emp()
		{
			cout<<"constructor called"<<endl;
		}
		~emp()
		{
			cout <<"destructor called"<<endl;
		}
};
int main ()
{
	emp e1;
	return 0;
}

