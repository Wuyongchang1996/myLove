#include <stdio.h>
#include<string.h>
char pic[8][8];
int col[8];
int c;
int n,k;
void dfs(int begin,int num)
{
	int j,h;
    for(j=0;j<n;j++)
    {
        if(pic[begin][j]=='#' && col[j]==0)
        {
            if(num==1)
                c++;
            else
            {
                col[j]=1;
                for(h=begin+1;h<n-num+2;h++)
                    dfs(h,num-1);
                col[j]=0;
            }
        }
    }
}
int main()
{
    while((scanf("%d %d\n",&n,&k))&&(!(n==-1&&k==-1)))
    {
    	int i,j;
        c=0;
        for(i=0;i<n;i++){
        	for(j=0;j<n;j++)
                scanf("%c",&pic[i][j]);
            getchar();
		}       
        for(i=0;i<n;i++)
            col[i]=0;
        for(i=0;i<=n-k;i++)
        {
            dfs(i,k);
        }
        printf("%d\n",c);
    }
}
