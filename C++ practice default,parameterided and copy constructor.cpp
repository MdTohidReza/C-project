#include<iostream>
using namespace std;
class sample
{
	private:
		int a;
		int b;
	public:
		sample()  // For default constructor
		{
			a=0;
			b=0;
		}
		sample(int x , int y)  // For parameterized constructor
		{
			a=x;
			b=y;
		}
		
		sample(sample & S)  // for copy constructor
		
		{
			a=S.a;
			b=S.b;
		}
		
		void display()
		
		{
			int Area;
			Area = a*b;
			cout<<" Area of Rectangle is = "<< Area << endl;
		
		}
		
		
		
};

int main()
{
	sample S;// Default constructor
	
	sample T(5,6);// parameterized constructor
	
	sample K(T);// copy constructor
	
    S.display();// Here default constructor is display
    
    T.display();// Here parameterized constructor is display
    
    K.display();//Here copy constructor is display
    
	return 0;
}
