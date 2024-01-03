#include<iostream>
using namespace std;
template<class T1,class T2>
class sample
{
	private:
		T1 a;
		T2 b;
	public:
		sample(T1 x, T2 y)
		{
			a=x;
			b=y;
		}
		void display()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
		}
};
int main()
{
	sample<int,float>s(5,6.7);
	s.display();
	
	sample<char,int>p('a',5);
	p.display();
	
	return 0;
}
