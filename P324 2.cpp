#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *fp;
	int num;
	if((fp=fopen("c:\\2.txt","a"))==NULL){
		printf("File open error!\n");
		exit(0);
	}
	scanf("%d",&num);
	while(num!=-1){
		fprintf(fp,"%d",num);
		scanf("%d",&num);
	}
	if(fclose(fp)){
		printf("Cannot close the file!\n");
		exit(0);
	}
	return 0;
}
/*
1 2 3 4 5 6 7 -1
*/
