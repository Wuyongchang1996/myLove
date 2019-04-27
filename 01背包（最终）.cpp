#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
const int N = 100 + 5;
int t[N],h[N];
int dp[N];
int main()
{
	int n,H;
	scanf("%d%d",&n,&H);
	for(int i=1;i<=n;i++) scanf("%d%d",&h[i],&t[i]);
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=n;i++)  
	{
		for(int j=H;j>=h[i];j--)  
		{
			dp[j] = max(dp[j],dp[j-h[i]]+t[i]);
		}
	}
	printf("%d\n",dp[H]);
	return 0;
}
/*
4 20
5 10
25 60
15 30
50 1
*/