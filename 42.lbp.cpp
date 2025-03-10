#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>=30||n<=50)
	{
		printf("D");
	}
	else if(n>=5||n<=60)
	{
		printf("C");
	}
	else if(n>=6||n<=80)
	{
		printf("B");
	}
	else
	{
		printf("A");
	}
	return 0;
}
