#include<stdio.h>
#include<stdlib.h>
#define num 100
int bestx[num] = {0};
int w[num];
int x[num];
int bestw = 0;
int cw = 0;
int n;
int c1;
int c2;
int bound(int t){
	int rw = 0;
	for(int i = t+1;i <= n;i++)
		rw = rw + w[i];
	return ( rw +cw );
}
void loadingRec(int t){
	int i;
	if( t>n ){
		if( cw > bestw ){
			bestw = cw;
		    for( i = 1;i <= n; i++)
		      bestx[i] = x[i];
		}
		return;
	}
	else {
		if( cw + w[t] <= c1){
			x[t] = 1;
			cw = cw+w[t];
			loadingRec(t+1);
			cw = cw-w[t];
			x[t] = 0;
		}
		if(bound(t) > bestw){
			loadingRec(t+1);
		}
	}
}
int main()
{
	n = 4;
	w[1] = 4;w[2] = 5;w[3] = 3;w[4] = 2;
	c1 = 8;
	c2 = 7;
	printf("集装箱的重量：\n");
	for(int i = 1;i <= 4;i++)
	  printf("%d ",w[i]);
	printf("\n第1船的容量： %d\n",c1);
	printf("第2船的容量： %d\n",c2);
	cw = 0;
	bestw = 0;
	loadingRec(1);
	printf("\n第1船的最优载重量为：%d\n",bestw);
	printf("第1船的最优解为：\n");
	for(int i = 1;i <= n;i++)
	  if(bestx[i]) printf("第%d件集装箱装入第1船\n",i);
	  else printf("第%d件集装箱不装入第1船\n",i);
	int cw2 = 0;
	for(int i = 1;i <= n;i++)
	  if(bestx[i] == 0) cw2 += w[i];
	if(cw2 > c2)
	  printf("\n无法将剩余集装箱装入第2船，问题无解");
    else
      printf("\n可将剩余集装箱装入第2船，问题有解");
    getchar();
}
