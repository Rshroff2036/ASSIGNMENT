//Write a C++ program to create a class called Rectangle that has private
//member variables for length and width. Implement member functions to
//calculate the rectangle's area and perimeter.
#include<iostream>
using namespace std;
class Rectangle{
	float length,width,length1,width1;
	public:
		void get()
		{
			cout<<"finding the area of the rectangle";
			cout<<"\nenter the length of the rectangle :";
			cin>>length;
			cout<<"\nenter the width of the rectangle :";
			cin>>width;
			
			cout<<"area of the Rectangle is: "<<length*width;
			
			cout<<"\n***********************************************";
			cout<<"\nfinding the perimeter of the Rectangle";
			cout<<"\nenter the length for perimeter :";
			cin>>length;
			cout<<"\nenter the width for perimeter :";
			cin>>width;
			cout<<"perimeter of the Rectangle is : "<<2*(length + width);
		}
		
		
};
int main()
{
	Rectangle obj;
	obj.get();
	return 0;
}
