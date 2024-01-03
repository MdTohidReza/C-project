#include<iostream>// program using constructor overloading
using namespace std;
class person
{
	private:
		char name[20];
		char address[20];
		int age;
	public:
	    sample()
		{
			strcpy (name," ");
			strcpy (address , "  " );
			age =0;
		}
		person (char * A, char * B, int Z)
		{
			strcpy(name ,A);
			strcpy(address , B);
			age= z;
		}
		person (person & R)
		{
			strcpy(name , R.name);
			strcpy(address, R.address);
			age=R.age;
		}
		void display()
		{
			cout<<"Name is = "<< name << endl;
			cout<<" Address is "<< address << endl;
			cout<< " Age is = "<< age << endl;
		}	
 } ;
  int main()
  {
  	person s;
  	
  	person p(Tohid,Jnk,20);
  	
  	person k(p);
  	
  	s.display();
  	
  	p.display();
  	
  	k.display();
  	
  	return 0;
  	
  }
