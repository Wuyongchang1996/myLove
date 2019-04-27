#include<bits/stdc++.h>
using namespace std;
int cell[1005][1005];
bool p[1005][1005];
int dfs(int n,int m){
	p[n][m]=1;
	if(n==1&&m>1){
		if(p[1][m-1]==0){
			cell[1][m]+=dfs(1,m-1);
		}
		else cell[1][m]+=cell[1][m-1];
	} 
	if(m==1&&n>1){
		if(p[n-1][1]==0){
			cell[n][1]+=dfs(n-1,1);
		}
		else cell[n][1]+=cell[n-1][1];
	}  
	if(n>1&&m>1){
		if(p[n-1][m]==0&&p[n][m-1]==0){
			cell[n][m]+=max(dfs(n-1,m),dfs(n,m-1));
		}
		else if(p[n-1][m]==1&&p[n][m-1]==0){
			cell[n][m]+=max(cell[n-1][m],dfs(n,m-1));
		}
		else if(p[n-1][m]==0&&p[n][m-1]==1){
			cell[n][m]+=max(dfs(n-1,m),cell[n][m-1]);
		}
		else cell[n][m]+=max(cell[n-1][m],cell[n][m-1]);
	} 
	return cell[n][m];
}
int main()
{
	int T,n,m,t=0;
	scanf("%d",&T);
	while(T--)
	{
		memset(p,0,sizeof(p));
		scanf("%d%d",&n,&m);
		for(int i=1;i<=n;i++)
		  for(int j=1;j<=m;j++)
		    scanf("%d",&cell[i][j]);
		int ans=dfs(n,m);
		t++;
		printf("Case %d: %d\n",t,ans);
	}
	return 0;
}
