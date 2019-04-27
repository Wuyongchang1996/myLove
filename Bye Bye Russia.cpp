#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,hc,hw,mc,mw,t=0,ans;
	scanf("%d\n",&T);
	while(T--)
	{
		scanf("%d%d%d%d",&hc,&mc,&hw,&mw);
		ans=(hw-hc)*60+mw-mc;
		t++;
		printf("Case %d: %d\n",t,ans);
	}
	return 0;
}
