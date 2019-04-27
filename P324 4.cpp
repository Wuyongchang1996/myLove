#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *fp;
	int num,s;
	s=0;
	if((fp=fopen("c:\\4.txt","a+"))==NULL){
		printf("File open error!\n");
		exit(0);
	}
	while(!feof(fp)){
		fscanf(fp,"%d",&num);
		s+=num;
	}
	fprintf(fp,"%d",s);
	if(fclose(fp)){
		printf("Cannot close the file!\n");
		exit(0);
	}
	return 0;
}
