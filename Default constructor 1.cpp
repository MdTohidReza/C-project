#include<iostream>
using namespace std;
class sample
{
	private:
		int l;
		int b;
	public:
		sample()// for default constructor
		{
			l=0;
			b=0;
		}
		sample(int x, int y)//for parameterized constructor
		{
			l=x;
			b=y;
		}
		void display()
		{
			int Area;
			Area=l*b;
			cout<<"Area = "<< Area << endl;
		}
		sample(sample & p)
		{
			l=p.l;
			
			b=p.b;
		}
		
};

int main()

{
	sample A();//default constructor call
	
	sample B(5,6);
	
	sample c(B);
	
	A.display();
	
	B.display();
	
	c.display();
	
	return 0;
}
