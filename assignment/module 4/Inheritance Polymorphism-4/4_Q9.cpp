#include<iostream>
using namespace std;
class add{
	int a[3];
	public:
		void get()
		{
			cout<<"enter three values:";
			for (int i=0;i<3;i++)
			{
				cin>>a[i];
			}
		}
		void display()
		{
			for (int i=0;i<3;i++)
			{
				cout<<a[i]<<",";
			}
		}
		add operator +(add obj)
		{
			int ans[3];
			for (int i=0;i<3;i++)
			{
				ans[i]=a[i]+obj.a[i];
			}
			for (int i=0;i<3;i++)
			{
				cout<<ans[i]<<" ";	
			}
		}
}; 
int main()
{
	add obj1;
	obj1.get();
	add obj2;
	obj2.get();
	obj1+obj2;
	return 0;
}
