# include<iostream>
using namespace std; //
class person
{
	private:
		char name[20];
		int roll;
		int age;
	public:
	    void input();
		void display();
			
};
void person::input()
{
	cout<<"enter the name"<<endl;
	cin>>name;
	
	cout<<"enter roll number of person"<<endl;
	cin>>roll;
	
	cout<<"enter age of person"<<endl;
	cin>>age; 
}
void person::display()
{
	cout<<"the name of person is "<<name<<endl;
	cout<<"the roll of person is "<<roll<<endl;
	cout<<"the age pf person is "<<age<<endl;
}
 int main()
 {
 	person p1,p2 ;
 	
 	
 	p1.input();
 	p2.input();
 	
 	p1.display();
 	p2.display();
 	
 	return 0;
 }
