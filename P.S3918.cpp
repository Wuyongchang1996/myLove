#include<stdio.h>
int main(void)
{
	int n,a,b,i,j,temp;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d",&a,&b);
		for(j=1;j<=a&&j<=b;j++)
		{
			if(a%j==0&&b%j==0)
			  temp=j;
		}
        printf("%d\n",temp);
	}
	return 0;
}
/*
2
6 12
6 8
*/