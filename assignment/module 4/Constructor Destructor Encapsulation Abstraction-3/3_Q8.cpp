//aggregation
#include<iostream>
using namespace std;
class student{
	public:
		int id;
		string address;
		void get_student(int id1,string address1)
		{
			id=id1;
			address=address1;
		}
};
class marks{
	float pr;
	char grade;
	student *ref;
	public:
		void get_marks(float pr1,char grade1,student *ref1)
		{
			pr=pr1;
			grade=grade1;
			ref=ref1;
		}
		void display()
		{
			cout<<"id is:"<<ref->id<<"\ngrade is:"<<grade;
			cout<<"\naddress is:"<<ref->address;
			cout<<"\npercentage is:"<<pr;
		}
};
int main()
{
	student stu;
	stu.get_student(101,"sabarmati");
	marks mark;
	mark.get_marks(98,'A',&stu);
	mark.display();
	return 0;
}
