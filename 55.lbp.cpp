#include<stdio.h>
int main()
{
	int num,sum=0,reminder;
	scanf("%d",&num);
	while(num!=0)
	{
		reminder=num%10;
		sum+=reminder;
		num/10;
	}
	printf("%d\n",sum);
	return 0;
}
