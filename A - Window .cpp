#include<stdio.h>
int main()
{
	int T;
	long long x,y;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%lld %lld",&x,&y);
		printf("%lld\n",x*y);
	}
	return 0;
}
