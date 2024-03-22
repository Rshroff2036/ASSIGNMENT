#include<iostream>
using namespace std;
class calculator{
	double no1,no2,ans;
	public:
		calculator()
		{
			cout<<"enter number 1 and number 2 :";
			cin>>no1>>no2;
			cout<<"addition is"<<no1+no2;
		}
		calculator(int a,int b)
        {
         	no1=a;
         	no2=b;
         	cout<<"substraction is"<<no1-no2;
		}
		calculator(int x)
		{
			no1=x;
			cout<<"enter 2nd value for multiplication";
			cin>>no2;
			cout<<"multiplication is"<<no1*no2;
		}
		calculator(double a,double b)
		{
			no1=a;
			no2=b;
			if(no2!=0)
			{
				cout<<"division is"<<no1/no2;
			}
			else
			{
				cout<<"can't divide by zero";
			}
		}
		 
};
int main()
{
	int choice,n1,n2;
	cout<<"1 for + 2 for - 3 for * 4 for / :";
	cin>>choice;
	
	if(choice==1)
	{
		calculator obj;
	}
	else if(choice==2)
	{
		cout<<"enter two values for substraction";
		cin>>n1>>n2;
		calculator obj(n1,n2);
	}
	else if(choice==3)
	{
		cout<<"enter 1st value for multiplication";
		cin>>n1;
		calculator obj(n1);
	}
	else if(choice==4)
	{
		calculator obj(5.2,0.0);
	}
	else
	{
		cout<<"invalid choice";
	}
	return 0;
}
