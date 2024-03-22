//Write a C++ Program display Student Mark sheet using Multiple inheritance
#include<iostream>
using namespace std;
class a{
	protected:
		string name;
		int roll_no;
		int standard;
};
class b{
	protected:
		int marks1,marks2,marks3,marks4,marks5;
	    int total_marks;
	    float percent;
};
class marksheet:public a,public b{
	public:
		void detail()
		{
			cout<<"enter the name of the student :";
			cin>>name;
			cout<<"enter the roll no:";
			cin>>roll_no;
			cout<<"enter the standard :";
			cin>>standard;
		}
		void info()
		{
			cout<<"enter the 5 subjects marks :";
			cin>>marks1>>marks2>>marks3>>marks4>>marks5;
			total_marks=marks1+marks2+marks3+marks4+marks5;
			cout<<"total marks:"<<total_marks;
			percent=total_marks/5;
		}
		void display()
		{
		cout<<"\n********************************";	
		 cout<<"\nname of student:"<<name;
		 cout<<"\nroll no:"<<roll_no;
		 cout<<"\nstandard:"<<standard;
		 cout<<"\ntotal marks got:"<<total_marks;
		 cout<<"\npercentage :"<<percent;	
		}
};
int main()
{
	marksheet obj;
	obj.detail();
	obj.info();
	obj.display();
	return 0;
}
