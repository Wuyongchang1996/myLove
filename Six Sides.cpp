#include<bits/stdc++.h>
using namespace std;
float t[10],k[10];
double ch=0.0000000;
double cal(int i){
	double ans=0.0000000;
	for(int j=0;;j++){
		ans+=k[i]/36*pow(ch,j);
		if(k[i]/36*pow(ch,j)<0.00000001) break;
	}
	return ans;
}
int main()
{
	memset(t,0.00000,sizeof(t));
	memset(k,0.00000,sizeof(k));
	float ans=0.00000;
	int a[10],b[10];
	for(int i=1;i<=6;i++)
	  scanf("%d",&a[i]);
	for(int i=1;i<=6;i++)
	  scanf("%d",&b[i]);
	for(int i=1;i<=6;i++)
	  for(int j=1;j<=6;j++)
	  {
	  	if(a[i]>b[j]) k[i]++;
	  	if(a[i]==b[j]) t[i]++;
	  }
	for(int i=1;i<=6;i++) ch+=t[i]/36;
	for(int i=1;i<=6;i++) ans+=cal(i);
    printf("%.5f\n",ans);
    return 0;
}
