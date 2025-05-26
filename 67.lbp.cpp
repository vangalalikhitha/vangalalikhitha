#include<stdio.h>
int main()
{
	int n,dno,r,count;
	count=0;
	scanf("%d",&n);
	dno=n;
	while(n>0)
	{
		if(n%10==0)
		{
			count=1;
			break;
		}
		n=n\10;
	}
	if(dno>0&&count==100)
	printf("yes");
	else
	printf("no");
	return 0;
}
