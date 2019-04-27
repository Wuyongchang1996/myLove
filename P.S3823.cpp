#include<stdio.h>
#include<math.h>
int main(void)
{
	float n,m;
	scanf("%f",&n);
	m=3.14*n/180;
	printf("%.2f\n%.2f",sin(m),cos(m));
	return 0;
}
/*
90
*/ 