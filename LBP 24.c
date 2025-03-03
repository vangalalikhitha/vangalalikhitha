#include<stdio.h>
int main()
{
	int n,d,m;
	int c=0;
	printf("Two numbers n and d \n");
	scanf("%d%d",&n,&d);
	while(n>0)
	{
		m=n%10;
		if(m==d)
		{
			c++;
		}
		n=n/10;
	}
	printf("Number of occurrences=%d",c);
	return 0;
}
