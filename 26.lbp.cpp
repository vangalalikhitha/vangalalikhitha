#include<stdio.h>
void decimal_to_binary(int D)
{
	int B[32];
	int i=0;
	{
		B[i++]=D%2;
		D=D/2;
	}
	printf("binary representation");
	for(int j=i-1;j>=0;j--)
	{
		printf("%d",B[j]);
	}
	printf("\n");
	{
		int main ()
		int decimal;
		scanf("%d",&decimal);
		decimal_to_binary(decimal);
		return 0;
    }
}
