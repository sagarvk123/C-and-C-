#include<stdio.h>
int main()
{
	int num1, num2, sum, difference, multiplication, division, percentage;
	printf("enter the number 1 ");
	scanf("%d",&num1);
	printf("enter the number 2 ");
	scanf("%d",&num2);
	sum = num1 + num2;
	printf("Sum of entered number: %d",sum);
	difference = num1 - num2;
	printf("Difference of entered number: %d",difference);
	multiplication = num1 * num2;
	printf("Multiplication of entered number: %d", multiplication);
	division = num1 / num2;
	printf("Division of entered number: %d",division);
	percentage = num1 % num2;
	printf("Percentage of entered number: %d",percentage);
	return 0;
}
