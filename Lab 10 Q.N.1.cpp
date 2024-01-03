#include<iostream>
#include<string.h>
using namespace std;
class college
{
	protected:
		char cname[20];
		char location[20];
	public:
		college(char *a , char *b)
		{
			strcpy(cname,a);
			strcpy(location,b);
		}
		void displayc()
		{
			cout<<"Name ="<<cname<<endl;
			cout<<"Location ="<<location<<endl;
		}
};
class student:virtual public college
{
	protected:
		char sname[20];
		int roll;
	public:
		student(char *a,char *b,char *c,int d):college(a,b)
		{
			strcpy(sname,c);
			roll=d;
		}
		void displays()
		{
			cout<<"Name ="<<sname<<endl;
			cout<<"Roll = "<<roll<<endl;
		}
};
class Teacher:virtual public college
{
	protected:
		char tname[20];
		int tcode;
	public:
		Teacher(char *a,char *b,char *e,int f):college(a,b)
		{
			strcpy(tname,e);
			tcode=f;
		}
		void displayt()
		{
			cout<<"Name = "<<tname<<endl;
			cout<<"code = "<<tcode<<endl;
		}
};
class Book:public student,public Teacher
{
	private:
		char bname[20];
		char wname[20];
		int bcode;
	public:
		Book(char *a,char *b,char *c,int d,char *e,int f,char *g,char *h,int i):college(a,b),student(a,b,c,d),Teacher(a,b,e,f)
		{
			strcpy(bname,g);
			strcpy(wname,h);
			bcode=i;
		}
		void displayb()
		{
			cout<<"Book Name = "<<bname<<endl;
			cout<<"Writer Name = "<<wname<<endl;
			cout<<"code = "<<bcode<<endl;
		}
};
int main()
{
	Book B("NCIT","Lalitpur","Ali",12,"prakash",121,"water","Henry",786);
	
	B.displayc();
	B.displays();
	B.displayt();
	B.displayb();
	
	return 0;
}
