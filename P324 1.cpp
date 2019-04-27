#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *fp;
	char ch;
	int n,c,t;
	n=c=t=0;
    if((fp=fopen("c:\\1.txt","r"))==NULL){
    	printf("File open error!\n");
    	exit(0);
	}
	while(!feof(fp)){
		ch=fgetc(fp);
		if(ch!=EOF){
			if(ch>='0'&&ch<='9')n++;
			else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))t++;
			else c++;
		}
	}
	printf("%d %d %d",t,n,c);
	if(fclose(fp)){
		printf("Cannot close the file!\n");
		exit(0);
	}
	return 0;
}
