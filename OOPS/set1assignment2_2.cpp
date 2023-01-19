#include <iostream>
using namespace std;
class Val{
	public:
	static int value;
		
};
int Val::value=10;
int main ()
{
	cout<<Val::value;
}


