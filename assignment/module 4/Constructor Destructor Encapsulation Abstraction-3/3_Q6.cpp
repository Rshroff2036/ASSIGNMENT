//Write a C++ program to implement a class called Employee that has
//private member variables for name, employee ID, and salary. Include
//member functions to calculate and set salary based on employee performance. Using of constructor
#include<iostream>
using namespace std;
class employee{
string name;
int employee_id,salary;
public:
	 employee()
	 {
	 	cout<<"enter the name of the employee: ";
	 	cin>>name;
	 	cout<<"enter the employee id:";
	 	cin>>employee_id;
	 	cout<<"enter the salary of the employee:";
	 	cin>>salary;
	 }
	 void display()
	 {
	 	cout<<"\nname of the employee :"<<name;
	 	cout<<"\nemployee id :"<<employee_id;
	 	cout<<"\nsalary :"<<salary;
	 }

};
int main()
{
	employee obj;
	obj.display();
	return 0;
}
