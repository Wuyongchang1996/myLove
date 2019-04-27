#include<stdio.h>
int bestp = 0;//最优值 
int w[5] = {0,1,2,3,5};//物品的重量，下标为0的数据未使用 
int p[5] = {0,5,7,9,7};//物品价值
int x[5] = {0,0,0,0,0};//解向量
int bestx[5] = {0,0,0,0,0};//最优解解向量
int c = 10;//背包容量 
int cp = 0;//当前价值 
int cw = 0;//背包中物品的当前重量 
int n = 4; //物品个数
int bound(int t){
	int i = t;
	int b = cp;
	int r = c-cw;//背包剩余容量 ， 
	while(i <= n && (r>w[i])){
		b += p[i];
		r = r-w[i];
		i++;
	}
	if(i <= n) b = b+r*p[i]/w[i];
	return b;
} 
void knapREC(int t){
	int r = c-cw;
	if(t>n){//找到可行解 
		if(bestp<cp){//若当前可行解优于之前，保持改解为最优解 
			bestp = cp;
			for(int i = 1;i <= n;i++)
			  bestx[i] = x[i];
		}
		return;
	}
	else {
		if(r >= w[t]){//选择t物体进入背包 
			x[t] = 1;
			cw = cw+w[t];
			cp = cp+p[t];
			knapREC(t+1);//回溯，恢复当前背包容量及当前价值
			cw = cw-w[t];
			cp = cp-p[t];
			x[t] = 0; 
		}
		if(bound(t+1)>bestp){
			x[t] = 0;
			knapREC(t+1); 
		}
	}
}
int main()
{
	for(int i = 1;i <= 4;i++)
		printf("第%d件物品的价值为:%d,重量为:%d\n",i,w[i],p[i]);
	knapREC(1);
	for(int i = 1;i <= 4;i++){
		if(bestx[i] == 0) printf("第%d件物品不放入背包\n",i);
		else printf("第%d件物品放入背包\n",i);
	}
	printf("besttp = %d",bestp);
	getchar();
	return 0;
}

