#include<stdio.h>
int main()
{
	int n,r,s=0;
	scanf ("%d",&n);
	 while(n>0)
	 {
	 	r=n%10;
	 	s=s+r;
	 	n=n/10;
	 }
	 printf("%d",s);
	 
	 return 0;
}
