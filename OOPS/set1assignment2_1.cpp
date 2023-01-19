#include <iostream>
using namespace std;
int c=1;
class Complex{
	float a,b;
	public:
		void setComplex()
		{
			cout <<"Enter the real part"<<endl;
			cin>>a;
			cout <<"Enter the imaginary part"<<endl;
			cin>>b;
		}
		void displayComplex()
		{
			cout<<"Complex no. "<<c++<<": "<<a<<"+ i("<<b<<")"<<endl;
		}
		void sum(Complex c1,Complex c2)
		{
			a=c1.a+c2.a;
			b=c2.b+c2.b;
		}
};
int main ()
{
	Complex c1,c2,c3;
	c1.setComplex();
	c1.displayComplex();
	c2.setComplex();
	c2.displayComplex();
	cout<<"Obtained ";
	c3.sum(c1,c2);
	c3.displayComplex();
	return 0;
}
