#include<stdio.h>
int main()
{
    int n,m,t,p,i;
    scanf("%d",&n);
    while(scanf("%d",&m)!=EOF)
    {
        for(i=1;i<=m;i++)
        {
            scanf("%d",&p);
            if(i==1)
              t=p;
            if(p>t)
              t=p;
        }
        printf("%d\n",t);
    }
    return 0;
}