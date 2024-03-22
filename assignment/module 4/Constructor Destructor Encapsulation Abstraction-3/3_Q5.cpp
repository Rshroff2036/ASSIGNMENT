//Write a C++ program to create a class called Triangle that has private
//member variables for the lengths of its three sides. Implement member
//functions to determine if the triangle is equilateral, isosceles, or scalene.
#include<iostream>
using namespace std;
class triangle{
	float side1,side2,side3;
	public:
		void get()
		{
			cout<<"enter the three sides of the triangle :";
			cin>>side1>>side2>>side3;
			
			if(side1==side2 && side2==side3)
			{
				cout<<"this triangle is Equilateral Triangle";
			}
			else if(side1==side2 ||side2==side3 ||side1==side3)
			{
				cout<<"this triangle is Isosceles Triangle";
			}
			else
			{
				cout<<"triangle is Scalane Triangle";
			}
		}
		
};
int main()
{
	triangle obj;
	obj.get();
	return 0;
}
