#include<stdio.h>
int main()
{
	int T;
	long long w,h;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%lld %lld",&w,&h);
		if(w*h%2==0) printf("Hasan\n");
		else printf("Hussain\n");
	}
	return 0;
}
