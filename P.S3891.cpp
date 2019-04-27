#include<stdio.h>
int main()
{
	int n,a[101],i,j,p,t;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	   a[i]=-1;
    for(j=1;j<=n;j++)
    {
    	for(p=1;j*p<=n;p++)
    	   a[j*p]=-a[j*p]; 
    }
    t=0;
    for(i=1;i<=n;i++)
       if(a[i]==1)
         t++;
    printf("%d\n",t);
    return 0;
}