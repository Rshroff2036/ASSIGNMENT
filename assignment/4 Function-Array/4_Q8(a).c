//Write a program of structure employee that provides the following
//a. information -print and display empno, empname, address and age
#include<stdio.h>
struct employee{
	int empno;
	char empname[100];
	char address[100];
	int age;
};
int main()
{
	struct employee e1 ,e2; 
	printf("enter e1 no. and name and address and age:\n");
	scanf("%d %s %s %d",&e1.empno,&e1.empname,&e1.address,&e1.age);
	
	printf("enter e2 no. and name and address and age:\n");
	scanf("%d %s %s %d",&e2.empno,&e2.empname,&e2.address,&e2.age);
	
	printf("\ndetails of e1: \ne1 no. : %d \ne1 name : %s \n e1 address : %s \n e1 age : %d \n",e1.empno,e1.empname,e1.address,e1.age);
    printf("\ndetails of e2: \ne2 no. : %d \ne2 name : %s \n e2 address : %s \n e2 age : %d \n",e2.empno,e2.empname,e2.address,e2.age); 
	return 0;
}
