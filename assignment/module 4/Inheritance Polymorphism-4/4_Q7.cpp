//multi level inheritance
#include<iostream>
using namespace std;
class A{
	protected:
		int no1,no2;
};
class B:public A{
	public:
		void get()
		{
			cout<<"enter values:";
			cin>>no1>>no2;
		}
};
class C:public B{
	public:
		void add()
		{
			cout<<"addition is:"<<no1+no2;
		}
		void sub()
		{
			cout<<"substraction is :"<<no1-no2;
		}
};
int main()
{
	C obj;
	int choice;
	cout<<"1 for + 2 for -";
	cin>>choice;
	obj.get();
	switch (choice)
	{
		case 1:
			obj.add();
			break;
		case 2:
			obj.sub();
			break;
		default:
			cout<<"invalid choice";
			break;
			
	}
	return 0;
}
