#include<stdio.h>
#include<string.h>
struct employees
{
	char Name[20];
	int Employee_ID[20];
	int Experience[20];
	int Salary[20];
};
int main()
{
	int i,n=5;
	struct employees s1[n];
	for(i=0;i<n;i++)
	{
	printf("\nEnter name:");
	scanf("%s",s1[i].Name);
	printf("\nEnter employee_id:");
	scanf("%d",&s1[i].Employee_ID);
	printf("\nenter the experience:");
	scanf("%d",&s1[i].Experience);
	printf("\nenter the salary:");
	scanf("%f",&s1[i].Salary);
}
for(i=0;i<n;i++){
printf("\nName: %s",s1[i].Name);
printf("\nEmployee_ID: %d",s1[i].Employee_ID);
printf("\nExperience: %d",s1[i].Experience);
printf("\nSalary: %f",s1[i].Experience);
}
return 0;
}


