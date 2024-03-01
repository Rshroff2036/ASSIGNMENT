//WAP to accept 5 students name and store it in array
#include<stdio.h>
int main() 
{
    char name[5][100],i;
    for(i=0;i<5;i++)
    {
        printf("\n enter name %d:",i+1);
        scanf("%s",&name[i]);
        
    }
    for(i=0;i<5;i++)
    {
        printf("name %d: %s\n",i+1,name[i]);
    }
    return 0;
}


