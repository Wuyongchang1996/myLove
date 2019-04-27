#include<bits/stdc++.h>
using namespace std;
char mp[55][55];
int n,m;
bool OK(int i,int j){
	if(mp[i+1][j]=='.'&&i<n) return 1;
	else return 0;
}
void change(int i,int j){
	if(OK(i,j)){
		mp[i][j]='.';mp[i+1][j]='o';
		change(i+1,j);
	}
	else return;
}
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		getchar();
		for(int j=1;j<=m;j++)
	    scanf("%c",&mp[i][j]);
	}
	for(int i=n-1;i>=1;i--)
	  for(int j=1;j<=m;j++)
	    if(mp[i][j]=='o')
	      change(i,j);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
	    printf("%c",mp[i][j]);
	    printf("\n");
	}
	return 0;
}
