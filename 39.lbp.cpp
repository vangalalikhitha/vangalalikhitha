#include<stdio.h>
#include<math.h>
int main()
{
	float a,result,m,n;
	//int m,n;
	scanf("%f",&a);
	printf("power m:");
	scanf("%f",&m);
	printf("power n:");
	scanf("%f",&n);
	result=pow(pow(a,m),n);
	printf("result=%f",result);
	return 0;
}
