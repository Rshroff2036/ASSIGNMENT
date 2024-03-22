#include<iostream>
using namespace std;
class bank{
	string name,type_ac;
	int ac_no;
	float balance,dp_amt,wt_amt;
	public:
		void get()
		{
			cout<<"enter name of account holder:";
			cin>>name;
			cout<<"enter type of account:";
			cin>>type_ac;
			cout<<"enter total balance:";
			cin>>balance;
		}
		void deposite()
		{
			cout<<"amount to deposite:";
			cin>>dp_amt;
			balance=balance+dp_amt;
		}
		void withdraw()
		{
			cout<<"amount to withdraw:";
			cin>>wt_amt;
			if(wt_amt>balance)
			{
				cout<<"\ninsufficient balance";
			}
			else
			{
				balance=balance-wt_amt;
			}
		}
		void display()
		{
			cout<<"\nname of accunt holder is:"<<name;
			cout<<"\ntotal current balance is:"<<balance;
		}
};
int main()
{
	bank obj;
	obj.get();
	int choice;
	cout<<"enter 1 for deposite:";
	cout<<"\nenter 2 for withdraw:";
	cout<<"\nenter the choice:";
	cin>>choice;
	switch (choice)
	{
		case 1:
			obj.deposite();
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
