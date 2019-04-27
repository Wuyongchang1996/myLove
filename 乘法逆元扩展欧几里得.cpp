#include<stdio.h>
#include<math.h>
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
int cal(int a,int b)
{
    int x,y;
    int Gcd=exgcd(a,b,x,y);

    if(1%Gcd)
        return -1;

    x*=1/Gcd;
    b/=Gcd;
    b=b<0? -b:b;
    int ans=x%b;
    ans=ans<=0? ans+b:ans;
    return ans;
}
int main()
{
	int a,b,c,ans;
	scanf("%d %d %d",&a,&b,&c);
	ans=(a%c)*9cal(b,c);
	printf("%d\n",ans);
	return 0;
}
