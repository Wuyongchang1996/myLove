#include<stdio.h>
#include <math.h>  
int main() 
{ 
 int x,y,i;
 float a,b,s;
 while(scanf("%d %d",&x,&y)!=EOF)
 {
 	a=x;s=0;
 	{
  for(i=y;i>=1;i--)
  {
  s+=a;
  b=sqrt(a);
  a=b;
  }
 printf("%.2f\n",s);
 }
}
}
