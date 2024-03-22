//Write a C++ program to implement a class called Circle that has private member variables for radius.
//Include member functions to calculate the circle's area and circumference.
//3.14*r*r=radius
//2*3.14*r=circumference
#include<iostream>
using namespace std;
class circle{
	float radius;
	public:
		void get()
		{
			cout<<"finding the area of the circle";
			cout<<"\nenter the radius of the circle :";
			cin>>radius;
			cout<<"area of the circle is: "<<3.14*radius*radius;
			
			cout<<"\n***********************************************";
			cout<<"\nfinding the circumference of circle";
			cout<<"\nenter the radius for circumference : ";
			cin>>radius;
			cout<<"circumference of the circle is : "<<2*3.14*radius;
		}
		
		
};
int main()
{
	circle obj;
	obj.get();
	return 0;
}
