#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year to check: ");
	scanf ("%d",&year);
	if(year %4==0 && year %100!=0||year%400==0)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	return 0;
}
