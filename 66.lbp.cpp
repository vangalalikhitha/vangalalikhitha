#include<stdio.h>
int main()
{
	int a=0,b=1,c,n,i,sum=0;
	printf("enter any num");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=sum+a;
		c=a+b;
		a=b;
		b=c;
	}
	printf("%d",sum);
	return 0;
}
