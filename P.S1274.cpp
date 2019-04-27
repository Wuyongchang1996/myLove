#include<stdio.h>
int main()
{
	int n,i,temp,sum,m;
	while(scanf("%d",&n)!=EOF)
	{
		while(scanf("%d",&m)!=EOF)
		{
				sum=0;
	 for(i=0;i<m;i++)
	 {
	 	scanf("%d",&temp);
	 	sum+=temp;
	 }
	 printf("%d\n",sum);
		}
 }
 return 0;
} 
