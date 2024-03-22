//Write a C++ program to implement a class called Bank Account that has
//private member variables for account number and balance.
// Include member functions to deposit and withdraw money from the account
#include<iostream>
using namespace std;
class bank_account{
	int ac_no;
	float balance;
	int dp;
	int wt;
	public:
		void get()
		{
			cout<<"enter the account number :";
			cin>>ac_no;
			cout<<"enter total balance:";
			cin>>balance;
		}
		void deposit()
		{
			cout<<"enter the amount for deposit :";
			cin>>dp;
			balance=dp+balance;
		}
		void withdraw()
		{
		
		
			cout<<"enter the amount for withdraw :";
			cin>>wt;
			
			if(balance>wt)
			{
				cout<<"insufficient balance";
			}
			else{
				balance=balance-wt;
			}
	    }
		void display()
		{
			cout<<"\nenter the account number :"<<ac_no;
			cout<<"\ncurrent balance :"<<balance;
		}
};
int main()
{
	bank_account obj;
	obj.get();
	int choice;
	cout<<"enter 1 for deposite:";
	cout<<"\nenter 2 for withdraw:";
	cout<<"\nenter the choice:";
	cin>>choice;
	switch (choice)
	{
		case 1:
			obj.deposit();
			break;
		case 2:
		    obj.withdraw();
			break;
		default:
		    cout<<"invalid choice:";	
	}
	obj.display();
	return 0;
}
