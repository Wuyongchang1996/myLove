#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std; 
#define maxn 100001
int p,n;
int map[maxn],T[maxn],a[12][maxn];
void f(int x,int t){
	int i;
	if(t<=p){
		for(i=1;i<=n;i++)if(t==T[i])if(x==map[i])a[x][t]++;
		t++;
		f(x-1,t);f(x,t);f(x+1,t);
		a[x][t-1]+=max(max(a[x-1][t],a[x][t]),a[x+1][t]);
	}
}
int main()
{
	int i,j;
	while(scanf("%d",&n)&&n)
	{
		memset(a,0,n*n);
		for(i=1;i<=n;i++)scanf("%d %d",&map[i],&T[i]);
		p=T[1];
		for(i=2;i<=n;i++)
		if(p<T[i])p=T[i];
		f(5,0);
		printf("%d\n",a[5][0]);
	}
	return 0;
}
