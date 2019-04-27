#include<stdio.h>
int main()
{
	int n,i,j;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=1;i<=n;i++)
	    {
    		  for(j=1;j<=i;j++)
           {
           	if(j==1) printf("%d*%d=%d",j,i,j*i);
           	else printf(" %d*%d=%d",j,i,j*i);
           	if(j*i<10) printf(" ");
           }
           printf("\n");
    	}
    	printf("\n");
	}
	return 0;
}