#include<stdio.h>
int main()
{
	int n,r,rev;
	printf("enter n");
	scanf("%d",&n);
	rev=0;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("%d",rev);
	return 0;
}
