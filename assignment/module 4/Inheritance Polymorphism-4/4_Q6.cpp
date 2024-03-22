#include <iostream> 
using namespace std; 

class Base { 
private: 
	int pvt ; 

protected: 
	int prot ; 

public: 
	int pub ;
	
	int getPVT()
	{
		cout<<"private :";
		cin>>pvt;
	}
}; 

class PublicDerived : public Base { 
public:  
	int getProt() 
	{
		cout<<"\nprotected :";
		cin>>prot;
	}
	int getpub()
	{
		cout<<"public :";
		cin>>pub;
	}
}; 

int main() 
{ 
	PublicDerived obj;
	obj.getProt();
	obj.getPVT();
	obj.getpub();
	return 0; 
}

