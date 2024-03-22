//Write a program to swap the two numbers using friend function without using third variable
#include<iostream>
using namespace std;
class A{
	int n1,n2;
	public:
		void get()
		{
			cout<<"enter the n1 value:";
			cin>>n1;
			cout<<"enter the n2 value:";
			cin>>n2;
		}
		friend void swap(A);
};
void swap(A obj)
{
	obj.n1=obj.n1+obj.n2;
	obj.n2=obj.n1-obj.n2;
	obj.n1=obj.n1-obj.n2;
	cout<<"after swapping values of n1:"<<obj.n1;
	cout<<"\nafter swapping values of n2:"<<obj.n2;
}
int main()
{
	A obj;
	obj.get();
	swap(obj);
	return 0;
}
