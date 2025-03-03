#include<stdio.h>
int main()
{
	int t;
	printf("enter the temperature in celsius");
	scanf("%d",&t);
	if(t<0)
	{
		printf("freezing");
	}
	else if(t>=0||t<=20)
	{
		printf("cold");
	}
	else if(t>=21||t>=30)
	{
		printf("moderate");
	}
	else
	{
		printf("hot");
	}
	return 0;
}
