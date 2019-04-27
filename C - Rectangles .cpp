#include<stdio.h>
#include<string.h>
int main()
{
	int mp[105][105];
	int T,n,i,j,k;
	scanf("%d",&T);
	while(T--)
	{
		memset(mp,0,sizeof(mp));
		scanf("%d",&n);
		while(n--)
		{
			scanf("%d %d %d",&i,&j,&k);
			for(int a=i;a<j;a++)
			  for(int b=0;b<k;b++)
			    mp[a][b]=1;
		}
		int ans=0;
		for(int a=0;a<100;a++)
		  for(int b=0;b<100;b++)
		    if(mp[a][b]) ans++;
		printf("%d\n",ans);
	}
	return 0;
 } 
