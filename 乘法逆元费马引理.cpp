#include<stdio.h>
#include<math.h>
int cal(int x,int m,const int MOD)
{
    int ans=1;
    while(m){
        if(m&1)
            ans=ans*x%MOD;
        m>>=1;
        x=(x%MOD)*(x%MOD);
    }
    return ans;
}
int main()
{
	int a,b,c,ans;
	scanf("%d %d %d",&a,&b,&c);
	ans=(a%c)*cal(b,c-2,c);
	printf("%d\n",ans);
	return 0;
}
