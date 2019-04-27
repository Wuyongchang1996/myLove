#include<stdio.h>
#include<string.h>
char *match(char *s,char ch1,char ch2);
int main(void)
{
	char *s,ch1,ch2,a[100];
	s=a;
	scanf("%s\n%c %c",&a,&ch1,&ch2);
	printf("%s\n",match(s,ch1,ch2));
	return 0;
}
char *match(char *s,char ch1,char ch2)
{
	char *p,*q,b[100],temp;
	p=s;
	q=b;
	int i,j;
	for(i=0;;i++)
	{
		temp=*(p+i);
	    if(temp==ch1)
	    break;
	}
	for(j=0;;j++)
	{
		temp=*(p+j);
	    if(temp==ch2)
	    break;
	}
	for(;i<=j;i++,q++)
	*q=*(p+i);
	return b;	
}
/*
program
r g
*/
