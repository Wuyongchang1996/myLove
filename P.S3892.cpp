#include<stdio.h>
int main()
{
	int n,a[20],b[20],i,k,j,t=0;
	while(scanf("%d",&n)!=EOF)
 {
	for(i=0;i<n;i++)	
	{
		scanf("%d",&a[i]);
		b[i]=0;
	}
	for(j=0;j<n-1;j++)
	   for(i=j+1;i<n;i++)
	      if(a[j]==a[i])
	        b[j]++;
    for(i=0;i<n;i++)
    {
       k=0;
       for(j=0;j<n;j++)
          if(b[i]>=b[j])
            k++;
       if(k==n){
	   
         if(t==0){printf("%d",a[i]);t=1;}
    else printf(" %d",a[i]);
    printf("\n");
    t=0;
    }}
    return 0;
 }
}
