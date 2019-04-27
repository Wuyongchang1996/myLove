#include<stdio.h>
#include<string.h>
#include<queue>
using namespace std;
#define maxn 100
struct node
{
    int x,y,z,step;
};
int L,R,C;
int dir[6][3] = {{1,0,0},{-1,0,0},{0,1,0},{0,-1,0},{0,0,1},{0,0,-1}};
char G[maxn][maxn][maxn];
int OK(int z,int x,int y) 
{
    if(z>=0&&z<L&&x>=0&&x<R&&y>=0&&y<C&&G[z][x][y]!='#')
        return 1;
    return 0;
}
int DFS(node s, node e)
{
    queue<node> Q;
    Q.push(s);
    while(Q.size())
    {
        s=Q.front();Q.pop();
        if(s.x==e.x&&s.y==e.y&&s.z==e.z)
            return s.step;
        for(int i=0; i<6; i++)
        {
            node q=s;
            q.x+=dir[i][0];
            q.y+=dir[i][1];
            q.z+=dir[i][2];
            q.step+=1;
            if(OK(q.z, q.x, q.y)==1)
            {
                G[q.z][q.x][q.y]='#';
                Q.push(q);
            }
        }
    }
    return -1;
}
int main()
{
    while(scanf("%d%d%d",&L,&R,&C),L+R+C)
    {
        int i,j,k;
        node s,e;
        for(i=0;i<L;i++)
        for(j=0;j<R;j++)
        {
            scanf("%s",G[i][j]);
            for(k=0;k<C;k++)
            {
                if(G[i][j][k]=='S')
                {
                    s.z=i;
                    s.x=j;
                    s.y=k;
                    s.step=0;
                }
                if(G[i][j][k]=='E')
                {
                    e.z=i;
                    e.x=j;
                    e.y=k;
                }
            }
        }
        int ans=DFS(s,e);
        if(ans!=-1)
            printf("Escaped in %d minute(s).\n",ans);
        else
            printf("Trapped!\n");
    }
    return 0;
}
