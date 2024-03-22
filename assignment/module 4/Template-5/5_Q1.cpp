//Write a program of to swap the two values using template
#include <iostream>
using namespace std;
template <typename T>
void swapvalues(T a, T b)
{
    T temp = a;
    a = b;
    b = temp;
    cout<<"after swapping values a :"<<a;
    cout<<"\nafter swapping values b :"<<b;
}

int main()
{
	swapvalues<int>(5,10);
	cout<<endl;
	cout<<"***********************************";
	cout<<endl;
	swapvalues<float>(2.5,5.6);
	cout<<endl;
	cout<<"***********************************";
	cout<<endl;
	swapvalues<char>('b','f');

    return 0;
}

