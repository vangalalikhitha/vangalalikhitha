#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int result;
	result=(a*a)+(2*a*b)+(b*b);
	printf("the result of(a+b)^2 is:%d\n",result);
	return 0;
}
