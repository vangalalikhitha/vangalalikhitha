#include<stdio.h>
int gcd (int n1,int n2)
{
	if(n2==0)
	return n1;
	return gcd(n2,n1%n2);
}
int main()
{
	int n1,n2;
	scanf("%d%d",&n1,&n2);
	int res=gcd(n1,n2);
	printf("%d",res);
	return 0;
}
