//WAP to show difference between Structure and Union

#include<stdio.h>
union employee{
	int u_id;//4
	char u_name[100];//100
	float u_salary;//4
};
struct employee1{
	int s_id;//4
	float s_salary;//4
	char s_name[100];//100
};
int main()
{
	
	struct employee1 s1;
	union employee u1;
	
	printf("\t ==========structure=========");
	printf("\nenter id and name and salary for strucure variable :");
	scanf("%d %s %f",&s1.s_id,&s1.s_name,&s1.s_salary);
	printf("\n name is %s \t id is %d \t salary is %.2f",s1.s_name,s1.s_id,s1.s_salary);
	
	printf("\n ==========union=============");
	printf("\nenter id and name and salary for union variable :");
	scanf("\n%d",&u1.u_id);
	printf("\nid is %d",u1.u_id);
	scanf("\n%s",&u1.u_name);
	printf("\nname is %s",u1.u_name);
	scanf("%f",&u1.u_salary);
	printf("\nsalary is %.2f",u1.u_salary);
	
	printf("\nsize of structure variable is %d",sizeof(s1));
	printf("\nsize of union variable is %d",sizeof(u1));
	
	return 0;
}
