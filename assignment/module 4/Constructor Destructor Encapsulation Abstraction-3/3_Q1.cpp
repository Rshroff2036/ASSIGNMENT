//inline function
#include<iostream>
using namespace std;
inline void mul(int a,int b)
{
	cout<<a*b;
}
inline void cubic(int a)
{
	cout<<a*a*a;
}
int main()
{
	int a,b;
	cout<<"enter the value for a and b :";
	cin>>a>>b;
	cout<<"multiplication :";
	mul(a,b);
	cout<<"\ncubic :";
	cubic(a);

	return 0;
}
