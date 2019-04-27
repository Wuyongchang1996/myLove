#include<iostream>
using namespace std;
#include<cmath>
int main()
{
	int N,h[10005],m;
	while(~scanf("%d",&N))
	{
		scanf("%d",&h[1]);
		for(int i=2;i<=N;i++)
		{
			scanf("%d",&h[i]);
			m=min(h[i-1],h[i]);
		}
		printf("%d\n",N*m);
	}
	return 0;
}
