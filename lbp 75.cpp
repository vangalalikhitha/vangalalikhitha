#include<stdio.h>
int main()
{
	int n,cn,r,rev=0;
	scanf("%d",&n);
	cn=n;
	while(n>0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
	}
	if(cn==rev)
	printf("yes");
	else
	printf("no");
	return 0;
}
