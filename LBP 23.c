#include<stdio.h>
int main()
{
	int n,t;
	printf("enter the number of coffee cups bought by the user (cups>=1) :");
	scanf("%d",&n);
	t=n+(n/6);
	printf("total number of cups the user gets including the free coffee cups = %d\n",t);
	return 0;
}
