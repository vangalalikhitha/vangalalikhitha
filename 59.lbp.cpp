#include<stdio.h>
int main()
{
	int a,b,i,n,count,c=0,sum=0;
	float res=0;
	scanf("%d%d",&a,&b);
	for(n=a;n<=b;n++)
	{
		count=0;
		for(i=2;i<n/2;i++)
		{
			if(n%i==0)
			{
				count=i;
				break;
			}
		}
		if(count==0&n!=1)
		{
			sum+=n;
			c++;
			printf("%d",n);
		}
	}
	res=sum/c;
	printf("%f",res);
	return 0;
}
