#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,N,D,C,S[100005],t=0,k,j,ans[100005];
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d%d",&N,&D,&C);
		for(int i=1;i<=N;i++)
		  scanf("%d",&S[i]);
		sort(S+1,S+N+1);
		k=N;
		for(int i=1;i<=N;i++)
		{
			if(S[i]>D/C){k=i;break;}
		}
		for(int j=1;j<=k;j++)
		  ans[j]=S[j]*C*j+(N-j)*D;
		sort(ans+1,ans+k+1);
		t++;
		printf("Case %d: %d\n",t,ans[1]);
	}
	return 0;
}
