#include<stdio.h>
#include<math.h>>
int main()
{
	int T,n,t,i,count,j;
	scanf("%d",&T);
	if(T<=10000){
	t=0;
	while(scanf("%d",&n)!=EOF)
	{
		if(n<=1000000000){
		
		count=0;
		for(j=1;j<=n/2;j++)
		{
			if(pow(2,j)>=n) break;
		}
		for(i=1;i<=j;i++)
		{
			count+=(n/(pow(2,i)));
		}
		printf("%d\n",count);
		t++;
		if(t==T) break;
	}}}
	return 0;
 } 
