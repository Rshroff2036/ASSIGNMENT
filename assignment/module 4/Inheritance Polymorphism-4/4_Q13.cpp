//Write a program to find the max number from given two numbers using friend function
#include<iostream>
using namespace std;
class A{
	int n1,n2;
	public:
		void get()
		{
			cout<<"enter the value of n1:";
			cin>>n1;
			cout<<"enter the value of n2:";
			cin>>n2;
		}
		friend void maximum(A);
};
void maximum(A obj)
{
	if(obj.n1>obj.n2)
	{
		cout<<"n1 is greater than n2:"<<obj.n1;
	}
	else
	{
		cout<<"n2 is greater than n1:"<<obj.n2;
	}
}
int main()
{
	A obj;
	obj.get();
	maximum(obj);
	return 0;
}
