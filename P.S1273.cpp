#include<stdio.h>
int main()
{
	int n,i,temp,sum;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)break;
		sum=0;
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&temp);
	 	sum+=temp;
	 }
	 printf("%d\n",sum);
 }
 return 0;
} 
