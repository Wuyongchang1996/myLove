#include<stdio.h>
int main(void)
{
	int T,n,count,i,j,m,p;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		scanf("%d",&n);
		count=0;
		for(j=0;j<=n/3;j++)
		   for(m=0;m<=n/2;m++)
		      for(p=0;p<=n;p++)
		         if(p+2*m+3*j==n)
		           count++;
        printf("%d\n",count);
	}
	return 0;
}
/*
3
1
2
3
*/