#include<stdio.h>
#include<math.h>
	||s=(a+b+c)/2
	float a,b,c;
	scanf("%f%f%f\n",&a,&b,&c);
	float s=(a+b+c)/2;
	float A=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("%f\n",A);
	return 0;
}
