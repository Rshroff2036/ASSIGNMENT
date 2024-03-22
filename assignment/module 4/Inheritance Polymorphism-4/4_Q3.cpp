//Create a class person having members name and age. Derive a class student
//having member percentage. Derive another class teacher having member
//salary. Write necessary member function to initialize, read and write data.
//Write also Main function (Multiple Inheritance)
#include<iostream>
using namespace std;
class person{
	protected:
	string name;
	int age;
};
class student{
	protected:
	int sub1,sub2,sub3;
	int total_marks;	
	float percentage;	
};
class teacher:public person,public student{
    int salary;
	public:
		
		void details()
		{
			cout<<"enter the name of the person :";
			cin>>name;
			cout<<"enter the age of the person :";
			cin>>age;
		}
		void std_info()
		{
		
			cout<<"nenter the 3 subjects marks out of 100 :";
			cin>>sub1>>sub2>>sub3;
			total_marks=sub1+sub2+sub3;
			cout<<"total marks:"<<total_marks;
			percentage=total_marks/3;
			cout<<"\npercentage:"<<percentage;
	
		}
		void teacher_info()
		{

			cout<<"\nname of the teacher:";
			cin>>name;
			cout<<"enter the salary :";
			cin>>salary;
		}
		void diplay()
		{
			cout<<"enter the name of the student :"<<name;
			cout<<"\nage of student :"<<age;
			cout<<"\ntotal marks :"<<total_marks;
			cout<<"\npercentage :"<<percentage;
			cout<<"\nname of the teacher :"<<name;
			cout<<"\nsalary:"<<salary;
			
		}
};
int main()
{
	teacher obj;
	obj.details();
	obj.std_info();
	obj.teacher_info();
	obj.diplay();
	return 0;
}
