#include<stdio.h>
int main(void)
{
	int i,j,n,m1,m2,p,t;
	scanf("%d",&n);
	for(p=1;p<=n;p++)
	{
		scanf("%d%d",&m1,&m2);
		t=0;
		for(i=m1;i<=m2;i++)
		{
			for(j=2;j<=i/2;j++)
			   if(i%j==0)
			     break;
	        if(j>i/2&&i!=1)
            {
            	t++;
            	if(t==1) printf("%d",i);
            	else printf(" %d",i);
            }
		}
		printf("\n");
	}
	return 0;
}
/*
2
2 10
5 21
*/