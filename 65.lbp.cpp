#include<stdio.h>
int main()
{
	int n,r,sum=0,temp;
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	if(temp%sum==0)
	printf("yes");
	else
	printf("no");
	return 0;
}
