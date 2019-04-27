#include<stdio.h>
int main(void)
{
	int n,m,flag,i,j;
	scanf("%d%d",&n,&m);
	flag=0;
	for(i=0;i<=m/2;i++)
	   for(j=0;j<=m/4;j++)
	      if(2*i+4*j==m&&i+j==n)
	      {
      		printf("%d %d",i,j);
      		flag=1;
      	  }
    if(flag==0)
      printf("No");
    return 0;
}
/*
14 32
*/