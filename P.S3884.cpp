#include<stdio.h>
int main()
{
	int n,a[20],m,i,t;
	while(scanf("%d",&n)!=EOF)
	{
		t=-1;
		for(i=0;i<n;i++)
		   scanf("%d",&a[i]);
		scanf("%d",&m);
		for(i=0;i<n;i++)
		{
			if(a[i]==m)
			{
				t=i;
				break;
			}
		}
		if(t!=-1)
		{
		for(i=0;i<t;i++)
		   printf("%d%c",a[i],i==(n-1)?'\n':' ');
		for(i=t+1;i<n;i++)
		   printf("%d%c",a[i],i==(n-1)?'\n':' ');			
		}
		else
		for(i=0;i<n;i++)
		   printf("%d%c",a[i],i==(n-1)?'\n':' ');
	}
	return 0;
}