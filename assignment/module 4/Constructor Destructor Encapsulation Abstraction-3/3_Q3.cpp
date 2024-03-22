//. Write a C++ program to create a class called Car that has private
//member variables for company, model, and year.
// Implement member functions to get and set these variables.
#include<iostream>
using namespace std;
class car{
	string company;
	string model;
	int year;
	public:
		void get()
		{
			cout<<"enter the name of the company :";
			cin>>company;
			cout<<"enter the model of the car :";
			cin>>model;
			cout<<"enter the year :";
			cin>>year;
		}
		void display()
		{
			cout<<"**********************************************\n";
			cout<<"name of the company of car :"<<company;
			cout<<"\nmodel of the car :"<<model;
			cout<<"\nyear of the car :"<<year;
		}
};
int main()
{
	car obj;
	obj.get();
	obj.display();
	return 0;
}
