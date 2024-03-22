#include<iostream>
using namespace std;
class calculate{
	double radius,length,width,base,height;
	public:
		void area()
		{
			cout<<"enter radius for circle :";
			cin>>radius;
			cout<<"area of circle is:"<<3.14*radius*radius;
		}
		void area(double length,double width)
		{

			cout<<"\narea of rectangle is :"<<length*width;
		}
		void area(double base)
		{  
			cout<<"enter the height for triangle :";
			cin>>height;
			cout<<"area of triangle is :"<<0.5*height*base;
		}
	
};
int main()
{
double no1,no2;
int choice;
cout<<"enter 1 for circle 2 for Rectangle 3 for Triangle :";
cin>>choice;
calculate obj;
switch(choice)
{
	case 1:
		obj.area();
		break;
	case 2:
		cout<<"\nenter the length and width for rectangle :";
		cin>>no1>>no2;
		obj.area(no1,no2);
		break;
	case 3:
		cout<<"enter the base for triangle :";
		cin>>no1;
		obj.area(no1);
		break;
	default:
		cout<<"invalid choice";
		break;	
}
return 0;
}
