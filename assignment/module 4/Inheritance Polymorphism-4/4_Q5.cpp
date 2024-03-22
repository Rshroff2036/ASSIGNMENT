//Assume that the test results of a batch of students are stored in three different
//classes. Class Students are storing the roll number. Class Test stores the
//marks obtained in two subjects and class result contains the total marks
//obtained in the test. The class result can inherit the details of the marks
//obtained in the test and roll number of students. (Multilevel Inheritance)
#include<iostream>
using namespace std;
class student{
	protected:
		int roll_no;
		public:
		void info()
		{
		
			cout<<"enter the roll no of student :";
			cin>>roll_no;
		}
};

class test:public student{
	protected:
		int mark1,mark2;
		public:
		void get()
		{
		
			cout<<"enter the two subjects marks out of 100:";
			cin>>mark1>>mark2;
		}
};
class result:public test{
	int total_marks;
	public:
		void detail()
		{
			total_marks=mark1+mark2;
		}
		void display()
		{
			cout<<"roll no:"<<roll_no;
			cout<<"\ntotal marks:"<<total_marks;
		}
};
int main()
{
	result obj;
	obj.info();
	obj.get();
	obj.detail();
	obj.display();
	return 0;
}
