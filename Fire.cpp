#include<stdio.h>
#include<string.h>
#include<queue>
using namespace std;
#define maxn 1000
struct node
{
    int x,y,step;
};
int R,C;
int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
char map[maxn][maxn];
int OK(int x,int y){
	if(map[x][y]!='#'&&map[x][y]!='F')return 1;
	else return 0;
}
int bfs(node J,node F){
	queue<node> Q,q;
	Q.push(F);q.push(J);
	while(q.size()){
		F=Q.front();Q.pop();
		for(int i=0;i<4;i++){
			node f=F;
			f.x+=dir[i][0];
			f.y+=dir[i][1];
			if(OK(f.x,f.y)==1){
				map[f.x][f.y]='F';
				Q.push(f);
			}
		}
		J=q.front();q.pop();
		if(J.x<0||J.x>=R||J.y<0||J.y>=C)
		return J.step;
		for(int i=0;i<4;i++){
		    node j=J;
		    j.x+=dir[i][0];
			j.y+=dir[i][1];
			j.step++;
			if(OK(j.x,j.y)==1)
				q.push(j);
		}
	}
	return -1;
}
int main()
{
	int T,i,j,ans;
	node J,F;
	while(scanf("%d\n",&T),T--){
		scanf("%d %d\n",&R,&C);
		for(i=0;i<R;i++){
			scanf("%s",map[i]);
			for(j=0;j<C;j++){
				if(map[i][j]=='J'){
					J.x=i;J.y=j;J.step=0;
				}
				if(map[i][j]=='F'){
					F.x=i;F.y=j;
				}
			}
		}
		ans=bfs(J,F);
		if(ans!=-1)printf("%d\n",ans);
	    else printf("IMPOSSIBLE\n");
	}
}
