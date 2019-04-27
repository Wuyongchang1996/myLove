#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
	FILE *fp1,*fp2;
	char ch1,ch2;
	int t=0;
	char path1[20],path2[20];
	strcpy(path1,"c:\\");
	strcat(path1,argv[1]);
	strcpy(path2,"c:\\");
	strcat(path2,argv[2]);
    if((fp1=fopen(path1,"r"))==NULL){
    	printf("File open error!\n");
    	exit(0);
	}
	if((fp2=fopen(path2,"r"))==NULL){
    	printf("File open error!\n");
    	exit(0);
	}
	while((!feof(fp1))&&(!feof(fp2))){
		ch1=fgetc(fp1);
		ch2=fgetc(fp2);
		if((ch1!=EOF)&&(ch2!=EOF)){
            if(ch1==ch2);
            else t=1;
		}
	}
	if(ch1==EOF&&ch2==EOF);
	else t=1;
	if(t==0)printf("Same");
	else printf("Not same");
	if((fclose(fp1))&&(fclose(fp2))){
		printf("Cannot close the file!\n");
		exit(0);
	}
	return 0;
}
/*
compare b1.txt b2.txt
*/
