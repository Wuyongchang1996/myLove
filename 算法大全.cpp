#include<stdio.h>
#include<math.h>
#include<string.h>
#define maxn 1000000
long long mod;
int t;
#define swap(m,n) {t=m;m=n;n=t;}
int n,m;
int gcd(int a,int b){
	if(m<n) swap(m,n);
	int r;
	while(n!=0){
		r=m%n;
		m=n;
		n=r;
	}
	return m;
}
int lcm(int a,int b){
	int ans;
	ans=a/gcd(a,b)*b;
	return ans;
}
long long mul(long long n,long long k){
	long long ans=1;
	while(k){
		if(k%2==1) ans=(ans*n)%mod;
		n=(n%mod)*(n%mod);
		k/=2;
	}
	return ans;
}
long long mult(long long n,long long m){
	long long ans=0;
	while(m){
		if(m%2==1) ans=(ans+n)%mod;
		n=n%mod+n%mod;
		m/=2;
	}
	return ans;
}
int check(int x) {
	if(x==2) return 1;
	int s=sqrt(x);
	for(int i=2;i<=s;i++) {
		if(x%i==0) return 0;
	}
	return 1;
}
int not_prime[maxn],prime[100000];
void get_prime(){
	int cnt=0;
	not_prime[1]=1;
	for(int i=2;i<=maxn;i++){
		if(!not_prime[i]) prime[++cnt]=i;
		for(int j=1;j<=cnt;j++){
			if(prime[j]*i>maxn) break;
			not_prime[prime[j]*i]=1;
			if(i%prime[j]==0) break;
		}
	}
}
int Euler(int n){
	int ret=1,i;
	for(i=2;i*i<=n;i++){
		if(n%i==0){
			n/=i,ret*=i-1;
			while(n%i==0) n/=i,ret*=i;
		}
	}
	if(n>1) ret*=n-1;
	return ret;
}
int euler[maxn];
void init(){
	euler[1]=1;
	for(int i=2;i<maxn;i++) euler[i]=i;
	for(int i=2;i<maxn;i++)
	  if(euler[i]==i)
	    for(int j=i;j<maxn;j+=i)
	      euler[j]-=euler[j]/i;
}
int cal(int x,int m,int mod){
	int ans=1;
	while(m){
		if(m&1) ans=(ans%mod)*(x%mod)%mod;
		m>>=1;
		x=(x%mod)*(x%mod)%mod;
	}
	return ans;
}
int x,y;
int exgcd(int a,int b,int &x,int &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    int r=exgcd(b,a%b,x,y);
    int t=x;
    x=y;
    y=t-a/b*y;
    return r;
}
int cal(int a,int b){
	int gcd=exgcd(a,b,x,y);
	if(1%gcd) return -1;
	x*=1/gcd;
	b/=gcd;
	b=b<0?-b:b;
	int ans=x%b;
	ans=ans<=0?ans+b:ans;
	return ans;
}
long long c[maxn+5][maxn+5];
void get_c(){
	for(int i=1;i<=maxn;i++) c[i][1]=i;
	for(int i=2;i<=maxn;i++)
	  for(int j=2;j<=i;j++)
	    c[i][j]=c[i-1][j]+c[i-1][j-1];
}
int main()
{
	memset(not_prime,0,sizeof(not_prime));
	memset(c,0,sizeof(c));
 }  
