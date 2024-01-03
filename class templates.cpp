#include<iostream>
using namespace std;
template<class T>
class sample
{
	private:
		T a;
		T b;
	public:
		sample(T x,T y)
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
	sample<int>s(5,6);
	s.display();
	
	sample<float>p(5.5,7.5);
	p.display();
	
	return 0;
}

