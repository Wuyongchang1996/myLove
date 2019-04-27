#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std; 
#define maxn 101
int visitor[maxn][maxn],a[maxn][maxn];int N;
void f(int x,int y){
	if(x<N){
		visitor[x][y]=1;
		if(visitor[x+1][y]==0)f(x+1,y);
		if(visitor[x+1][y+1]==0)f(x+1,y+1);
	    a[x][y]+=max(a[x+1][y],a[x+1][y+1]);
	}
}
int main()
{
	int i,j;
	memset(a,0,sizeof(a));
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	for(j=1;j<=i;j++)
	scanf("%d",&a[i][j]);
	f(1,1);
	printf("%d\n",a[1][1]);
	return 0;
}
