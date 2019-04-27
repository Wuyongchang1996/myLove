#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
const int N = 100 + 5;
int t[N],h[N];
int dp[N][N];
int main()
{
	int n,H;
	scanf("%d%d",&n,&H);
	for(int i=1;i<=n;i++) scanf("%d%d",&h[i],&t[i]);
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=n;i++) //一本书一本书的选过去 
	{
		for(int j=H;j>=h[i];j--) //j要大于等于h[i]是因为，如果容量不足h[i]，这本书只能不选 
		{
			dp[i][j] = max(dp[i-1][j],dp[i-1][j-h[i]]+t[i]);
		}
		// 下面就是只能不选的情况了	
		for(int j=0;j<h[i];j++) dp[i][j] = dp[i-1][j];
	}
	printf("%d\n",dp[n][H]);
	return 0;
}
/*
4 20
5 10
25 60
15 30
50 1
*/