//Write a program of structure employee that provides the following
//b. Write a program of structure for five employee thatprovides the following information 
//-print and display
//empno, empname, address and age
#include<stdio.h>
struct employee{
	int empno;
	char empname[100];
	char address[100];
	int age;
};
int main()
{
	int n,i;
	printf("enter the number of employee :");
	scanf("%d",&n);
	struct employee e[n];
	for(i=0;i<n;i++) 
	{
	printf("enter employee no. %d and name and address and age:\n",i+1);
	scanf("%d %s %s %d",&e[i].empno,&e[i].empname,&e[i].address,&e[i].age);
    }
	for(i=0;i<n;i++)
	{
		printf("employee details %d :",i+1);
		printf("\n no.:%d \n name: %s \n address:%s \n age :%d ",e[i].empno,e[i].empname,e[i].address,e[i].age); 
	}
	
	
	return 0;
}
