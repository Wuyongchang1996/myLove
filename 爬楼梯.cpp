#include<iostream>
using namespace std;
int t;
void f(int x){
	if(x==0) t++;
	if(x>0){
		f(x-1);f(x-2);f(x-3);
	}
}
int main()
{
	int T,n,x[55];
	cin>>T;
	while(T--)
	{
		int ans=1;
		cin>>n;
		for(int i=1;i<=n-1;i++)
		{
			cin>>x[i];
			t=0;
			f(x[i]);
			ans=ans*(t%10007)%10007;
		}
		cout<<ans<<endl;
	}
	return 0;
}
