#include<iostream>
#include<iomanip>
using namespace std;
#include<cstring>
#include<cmath>
int op(int i){
    int ans=1;
	for(int j=1;j<=i;j++)
	   ans*=j;
	return ans;
}
int C[1000][1000];
void get_C(){
	for(int i=1;i<=1000;i++) C[i][0]=1;
	for(int i=1;i<=1000;i++) C[i][1]=i;
	for(int i=2;i<=1000;i++)
	  for(int j=2;j<=i;j++)
	    C[i][j]=C[i-1][j]+C[i-1][j-1];
}
int main()
{
	int T,n,a[10],c[10];
	cin>>T;
	get_C();
	while(T--)
	{
		int k;
		memset(c,0,sizeof(c));
		cin>>n;
		for(int i=0;i<10;i++)
		{
			a[i]=n%10;
			n=n/10;
			if(n==0) {k=i;break;}
	    }
	    for(int i=k;i>0;i--)
	      for(int j=i-1;j>=0;j--)
	        if(a[i]<a[j]) c[i]++;
	    int z=0;
	    for(int i=k;i>=0;i--)
	      z+=c[i]*op(i);
	    double p,ans=0.000000000;
	    p=1.000000000/op(k+1);
	    for(int i=z;i>0;i--)
	      ans+=pow(p,i)*C[z-1][i-1];
	    if(z==1) ans=p;
	    cout<<setiosflags(ios::showpoint);
	    if(ans==0) cout<<setprecision(10)<<ans<<endl;
	    else cout<<setprecision(9)<<ans<<endl;
	}	
	return 0;
}
