#include<stdio.h>
char *strcat(char *s,char *t);
int main(void)
{
	char *s,*t,a[100],b[100];
	s=a;
	t=b;
	scanf("%s\n%s",&a,&b);
	printf("%s",strcat(s,t));
	return 0;	
}
char *strcat(char *s,char *t)
{
	char *p;
	p=s;
	while(*p!='\0')	p++;
	while(*t!='\0')
	{
	*p=*t;
	p++;
	t++;
	}
	return s;
}
/*
abc
def
*/
