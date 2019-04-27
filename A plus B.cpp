#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,t=0;
	long long A,B;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%lld %lld",&A,&B);
		t++;
		printf("Case %d:\n%lld + %lld = %lld\n",t,A,B,A+B);
		if(T) printf("\n");
	}
	return 0;
}
