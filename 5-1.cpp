#include<stdio.h>
#include<stdlib.h>
void Swap(int &x,int &y){
	int t;
	t = x; x = y; y = t;
}
void sort(int w[],int t[],int n){
	for(int m = 0;m<n; m++){
		t[m] = m;
	}
	int i,j;
	int lastExchangeIndex;
	i = n-1;
	while(i>0){
		lastExchangeIndex = 0;
		for(j= 0;j<i; j++){
			if(w[j+1]<w[j]){
				Swap(w[j],w[j+1]);
				lastExchangeIndex = j;
				Swap(t[j],t[j+1]);
			}
		}
		i = lastExchangeIndex;
	}
}
void loading(int x[],int w[],int c, int n,int *t){
	sort(w,t,n);
	for(int i = 0;i<n;i++) x[i] = 0;
	for(int j = 0;j<n && w[j] <= c;j++){
		x[j] = 1;
		c -= w[j];
	}
}
int main()
{
	int n,c;
	printf("请输入物品个数：");
	scanf("%d",&n);
	printf("请输入最大容量：");
	scanf("%d",&c);
	int w[200];
	int x[200];
	for(int i = 0;i<n;i++){
		printf("请输入第%d个物品重量：",i + 1);
		scanf("%d",&w[i]);
	}
	int *t = new int[n];
	for(int j = 0;j<n;j++) x[j] = 0;
	loading(x,w,c,n,t);
	printf("装入物品编号为：");
	for(int k = 0;k<n;k++){
		if(x[k] == 1)
		 printf("%d ",t[k] + 1);
	}
	return 0;
}
