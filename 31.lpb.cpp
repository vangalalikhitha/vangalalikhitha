#include<stdio.h>
int main()
{
	int a,b,temp;
	scanf("%d%d",&a,&b);
	a=b;
	b=temp;
	temp=a;
	printf("%d%d",a,b);
	return 0;
}
