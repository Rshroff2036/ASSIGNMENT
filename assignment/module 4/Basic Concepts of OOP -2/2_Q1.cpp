#include<iostream>
using namespace std;
class calculator
{
	int no1,no2;
	public:
	void sum()
	{
	cout<<"Addition is "<<no1+no2;
		
	}	
	void sub()
	{
	cout<<"substration is "<<no1-no2;
	}
	void multi()
	{
	cout<<"multiplication is"<<no1*no2;
	}
	void divide()
	{
		if(no2==0)
		cout<<"can't divide by zero";
		else
		cout<<"division is"<<no1/no2;
	}
	void modulo()
	{
		cout<<"modulo is"<<no1%no2;
	}
	void get()
	{
		cout<<"enter the no1 and no2 :";
		cin>>no1>>no2;
	}

};
int main()
{
	calculator obj;
	int choice;
	obj.get();
	cout<<"1 for addition\n2 for substration\n3 for multiplication\n4 for division\n5 for modulo\n";
	cout<<"enter the choice :";
	cin>>choice;
	switch(choice)
{
	
	case 1:
		obj.sum();
		break;
	case 2:
	    obj.sub();
		break;
	case 3:
		obj.multi();
		break;
	case 4:
		obj.divide();
		break;
	case 5:
		obj.modulo();
		break;
	default:
		cout<<"invalid choice";
}
		return 0;
}
	


