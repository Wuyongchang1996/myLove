#include<stdio.h>
int main()
{
	int n,m,i,g,t,T;
        t=T=0;
	int prime(int x);
	while(scanf("%d %d",&n,&m)!=EOF){
	if(n>=m){
		g=n,n=m,m=g;
	}
		for(i=n;i<=m;i++){
			g=prime(i);
			if(g!=0)t++;}
               for(i=n;i<=m;i++){
			g=prime(i);
			if(g!=0){T++;
                    if(t==T)printf("%d",g);
		             else printf("%d ",g);	
			}
		}
	printf("\n");
	    }
	printf("\n");
	
}
int prime(int x)
{
	int i,s;
	s=0;
	for(i=2;i<=(x/2);i++){
		if(x%i==0){
			s=s+i;
		}
	}
	if(s==0){
		return x;
	}
	else{
		return 0;
	}
}
