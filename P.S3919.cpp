#include<stdio.h>
int main(void)
{
	int n,m,i,j,k,index,temp;
	int a[50];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		for(j=0;j<m;j++)
		   scanf("%d",&a[j]);
        for(k=0;k<m-1;k++)
        {
        	index=k;
        	for(j=k+1;j<m;j++)
        	   if(a[j]>a[index])
        	     index=j;
      	    temp=a[index];
			a[index]=a[k];
			a[k]=temp; 
        }
        for(j=0;j<m;j++)
        {
        	printf("%d%c",a[j],j==(m-1)?'\n':' ');
        }
	}
	return 0;
}
/*
2
4 3 4 5 6
3 8 4 9
*/