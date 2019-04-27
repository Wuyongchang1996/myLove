#include<stdio.h>
#include<math.h>
int main()
{
	int T,n,t,i,j,p,q;
	double temp;
	scanf("%d",&T);
	if(T<=50)
	{
		t=0;
	while(scanf("%d",&n)!=EOF)
	if(n>=1&&n<=100000000)
	{
		q=0;
		for(i=0;;i++)
		{
			temp=sqrt((double)(n-i),2);
			if(temp%1==0)
			{
				p=(int)temp/1;
				for(j=2;j<p/2;j++)
				{
					if(p%j==0) break;
				}
				if(j>=p/2){
				printf("%d",n-i);q++;
			}
			}
			temp=sqrt((double)(n+i),2);
			if(temp%1==0)
			{
				p=(int)temp/1;
				for(j=2;j<p/2;j++)
				{
					if(p%j==0) break;
				}
				if(j>=p/2){
				printf("%d",n+i);q++;
			}
			if(q!=0) break;
		}
	}
	}
}
