#include<iostream>
using namespace std;
class sample
{
	private:
		int a;
		int b;
	public:
		sample()// for default constructor
		{
			a=0;
			b=0;
		}
		sample(int x, int y)//for parameterized constructor
		{
			a=x;
			b=y;
		}
		void display()
		{
			cout<<"a="<<a <<endl;
			cout<<"b="<< b << endl;
		}
};
int main()
{
	sample s(5,6);//parameterized constructor call
	s.display();
	return 0;
}
