#include<stdio.h>
int main()
{
	int i,n,slag=0;
	scanf("%d",&n);
	if(n==0||n==1)
	slag=1;
	for(i=0;i<=n/2;i++)
	{
		if(n%i==0)
		{
			slag=1;
			break;
		}
	}
	if(slag==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
  return 0;
}
