#include<stdio.h>
int main()
{
	int num,sum=0;
	do
	{
		printf("enter a number:");
		scanf("%d",&num);
		sum += num;
	}
	while(num!=0);
	printf("total = %d",sum);
	return 0;
}
