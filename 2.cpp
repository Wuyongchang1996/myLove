#include<stdio.h>
#define NUM 100
int c[NUM][NUM];
int b[NUM][NUM];
char X[NUM],Y{NUM},x[NUM],y[NUM];
void LCSLength(int m,int n){
	int i,j;
	for(i = 1;i <= m;i++) c[i][0] = 0;
	for(i = 1;i <= n;i++) b[0][i] = 0;
	for(i = 1;i <= m;i++)
	for(j = 1;j <= n;j++){
		if(x[i] == y[j]){
			c[i][j] = c[i-1][j-1] + 1;
			b[i][j] = 1;
		}
		else if(c[i-1][j] >= c[i][j-1]){
			c[i][j] = c[i-1][j];
			b[i][j] = 2;
		}
		else {
			c[i][j] = c[i][j-1];
			b[i][j] = 3;
		}
	}
} 
void LCS(int i,int j){
	if(i == 0 || j == 0)
	return;
	if(b[i][j] == 1){
		LCS(i-1,j-1);
		printf("%c ",x[i]);
	}
	else if(b[i][j] == 2) LCS(i-1,j);
	else LCS(i,j-1);
}
int main()
{
	int m,n;
	printf("input x[]number:\n");
	scanf("%d",&m);
	getchar();
	printf("input x[]:\n");
	for(int i=1;i <= m;i++)
	   scanf("%c",&x[i]);
	getchar();
	printf("input y[]number:\n");
	scanf("%d",&n);
	getchar();
	printf("input y[]:\n");
	for(int i=1;i <= n;i++)
	   scanf("%c",&y[i]);
	getchar();
	LCSLength(m,n);
	printf("output LCS[]:\n");
	LCS(m,n);
	return 0;
}
