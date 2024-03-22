//. Assume a class cricketer is declared. Declare a derived class batsman from
//cricketer. Data member of batsman. Total runs, Average runs and best
//performance. Member functions input data, calculate average runs, Display
//data. (Single Inheritance)
#include<iostream>
using namespace std;
class cricketer{
	public:
	string name;
	int age;
		void get()
		{
			cout<<"enter the name of the cricketer :";
			cin>>name;
			cout<<"enter the age of the cricketer :";
			cin>>age;
		}
};
class batsman:public cricketer{
	int total_runs,average_runs,matches_played,best_per;
	public:
	    void get1()
	    {
	    	cout<<"total runs :";
	    	cin>>total_runs;
	    	
	    	cout<<"enter the best performance:";
            cin>>best_per;
    
        }
        void average()
        {
        	cout<<"Enter matches played: ";
            cin>>matches_played;
            
        if(matches_played > 0)
		{
            average_runs = (total_runs) / matches_played;
        } 
		else 
		{
            average_runs = 0;
        }
	    }
	    void display()
	    {
	    	cout<<"\nname of the cricketer:"<<name;
	    	cout<<"\nage:"<<age;
   	    	cout<<"\ntotal runs:"<<total_runs;
	    	cout<<"\nbest performance:"<<best_per;
	    	cout<<"\ntotal matches played:"<<matches_played;
	    	cout<<"\naverage runs:"<<average_runs;
		}
};
int main()
{
	batsman obj;
	obj.get();
	obj.get1();
	obj.average();
	obj.display();
	return 0;
}

			
	

