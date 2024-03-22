//Write a C++ Program to find Area of Rectangle using inheritance
#include<iostream>
using namespace std;
class a{
	public:
		float length;
		void get()
		{
			cout<<"enter the length of rectangle:";
			cin>>length;
		}
};
class b:public a{
	float base;
	public:
		void get1()
		{
			cout<<"enter the base of rectangle:";
			cin>>base;
		}
		void diplay()
		{
			cout<<"area of rectangle is :"<<length*base;
		}
	
};		
int main()
{
	b obj;
	obj.get();
	obj.get1();
	obj.diplay();
	return 0;
}
		
