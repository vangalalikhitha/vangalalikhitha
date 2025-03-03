#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20];
	scanf("%s",str1);
	char str2[20];
	scanf("%s",str2);
	strcat(str1,str2);
	printf("after concatenate%s:",str1);
	return 0;
}
