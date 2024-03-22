//Write a C++ program to create a class called Person that has private
//member variables for name, age and country. Implement member
//functions to set and get the values of these variables.
#include<iostream>
using namespace std;
class person{
	string name,country;
	int age;
	public:
		void get()
		{
			cout<<"enter the name of the person :";
			cin>>name;	
			cout<<"\nenter the age of the person :";
			cin>>age;
			cout<<"\nenter the name of the country :";
			cin>>country;
		}
		void display()
		{
			cout<<"\nPerson name is:"<<name;
			cout<<"\nAge of the person is:"<<age;
			cout<<"\nCountry of the person is:"<<country;
		}
		
		
};
int main()
{
	person obj;
	obj.get();
	obj.display();
	return 0;
}
