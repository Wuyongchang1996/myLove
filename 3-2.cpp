#include<stdio.h>
int bestp = 0;//����ֵ 
int w[5] = {0,1,2,3,5};//��Ʒ���������±�Ϊ0������δʹ�� 
int p[5] = {0,5,7,9,7};//��Ʒ��ֵ
int x[5] = {0,0,0,0,0};//������
int bestx[5] = {0,0,0,0,0};//���Ž������
int c = 10;//�������� 
int cp = 0;//��ǰ��ֵ 
int cw = 0;//��������Ʒ�ĵ�ǰ���� 
int n = 4; //��Ʒ����
int bound(int t){
	int i = t;
	int b = cp;
	int r = c-cw;//����ʣ������ �� 
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
	if(t>n){//�ҵ����н� 
		if(bestp<cp){//����ǰ���н�����֮ǰ�����ָĽ�Ϊ���Ž� 
			bestp = cp;
			for(int i = 1;i <= n;i++)
			  bestx[i] = x[i];
		}
		return;
	}
	else {
		if(r >= w[t]){//ѡ��t������뱳�� 
			x[t] = 1;
			cw = cw+w[t];
			cp = cp+p[t];
			knapREC(t+1);//���ݣ��ָ���ǰ������������ǰ��ֵ
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
		printf("��%d����Ʒ�ļ�ֵΪ:%d,����Ϊ:%d\n",i,w[i],p[i]);
	knapREC(1);
	for(int i = 1;i <= 4;i++){
		if(bestx[i] == 0) printf("��%d����Ʒ�����뱳��\n",i);
		else printf("��%d����Ʒ���뱳��\n",i);
	}
	printf("besttp = %d",bestp);
	getchar();
	return 0;
}

