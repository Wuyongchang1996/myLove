#include<bits/stdc++.h>
#include<queue>
using namespace std;
int num=0,n,m;
char mp[55][55];
struct node
{
    int x,y;
};
int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
bool OK(int x,int y) 
{
    if(x>=1&&x<=n&&y>=1&&y<=m&&(mp[x][y]=='L'||mp[x][y]=='C')) return 1;
    else return 0;
}
void bfs(node s)
{
    queue<node> Q;
    Q.push(s);
    while(Q.size())
    {
        s=Q.front();Q.pop();
        for(int i=0; i<4; i++)
        {
            node q=s;
            q.x+=dir[i][0];
            q.y+=dir[i][1];
            if(OK(q.x, q.y))
            {
                mp[q.x][q.y]='W';
                Q.push(q);
            }
        }
    }
}
node s;
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		getchar();
		for(int j=1;j<=m;j++)
		scanf("%c",&mp[i][j]);
	}
    node e;
    for(int i=1;i<=n;i++)
      for(int j=1;j<=m;j++)
      	if(mp[i][j]=='L')
      	{
      		mp[i][j]='W';
      		s.x=i;s.y=j;
      		bfs(s);
      		num++;
		  }
	printf("%d\n",num);
    return 0;
}
