#include<stdio.h>
#include<string.h>
int max_len(char *s[],int n);
int main(void)
{
	int n,i,count;
	char *s[10],str[10][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		s[i]=str[i];
	}
	for(i=0;i<n;i++)
	{
		scanf("%s",str[i]);
	}
	count=max_len(s,n);
	printf("%d",count);
	return 0;
}
int max_len(char *s[],int n)
{
	int j,result;
	char *temp;
	temp=s[0];
	for(j=0;j<n-1;j++)
	{
		if(strcmp(s[j],s[j+1])>0)
		temp=s[j+1];
	}
	result=strlen(temp);
	return result;
}
/*
3
abcd
wyc
bibili
*/
