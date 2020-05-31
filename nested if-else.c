#include<stdio.h>
int main()
{
	int per;
	printf("enter the percentage:");
	scanf("%d",&per);
	if(per>80)
	{
		printf("grade A");
	}
	else if (per<80 && per>=70)
	{
		printf("grade B");
	}
	else if (per<70 && per>=60)
	{
		printf("grade C");
	}
	else if (per<60 && per>=45)
    {
    	printf("grade D");
	}
	else if (per<45)
	{
		printf("FAIL");
	}
	return 0;
}
