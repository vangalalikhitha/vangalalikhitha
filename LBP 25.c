#include<stdio.h>
int main()
{ 
	char m[20];
	int d,july;
	printf("enter month to check=\n");
	scanf("%s",&m);
	printf("enter day to check=\n");
	scanf("%d",&d);
	if (strcmp(m,"july")==0 &&d==5)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	return 0;
}
