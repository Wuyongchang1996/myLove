#include<bits/stdc++.h>
using namespace std;
int l[55],num[55];
void lup(int i){
	l[i]++;
	for(int j=i+1;;j++){
		if(num[j]<num[j+1]) l[i]++;
		else return;
	}
}
void ldown(int i){
	l[i]++;
	for(int j=i+1;;j++){
		if(num[j]>num[j+1]) l[i]++;
		else return;
	}
}
int main()
{
	int n;
	memset(l,0,sizeof(l));
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&num[i]);
		l[i]=1;
	}
	for(int i=1;i<=n;i++)
	{
		if(num[i]>num[i+1]&&num[i+1]<num[i+2]) lup(i);
		if(num[i]<num[i+1]&&num[i+1]>num[i+2]) ldown(i);
	}
	sort(l+1,l+n+1);
	printf("%d\n",l[n]);
	return 0;
}
