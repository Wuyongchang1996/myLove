#include<stdio.h>
#include<math.h>
int main()
{
	int n,a[100],i,t,j;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		   scanf("%d",&a[i]);
        for(j=0;j<n-1;j++)
           for(i=j;i<n;i++)
              {
              	if(fabs(a[j])<fabs(a[i]))
           	    {
    	           	t=a[j];
    	           	a[j]=a[i];
    	           	a[i]=t;
   	            }
              }
        for(i=0;i<n;i++)
           printf("%d%c",a[i],i==(n-1)?'\n':' ');
	}
	return 0;
}