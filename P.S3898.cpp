#include<stdio.h>
#include<math.h>
int dectobin(int N,int R);
int main(void)
{
    int N,R;
    while(scanf("%d %d",&N,&R)){   
	dectobin(N,R);
	printf("\n");
	}
    return 0;
}
int dectobin(int N,int R)
{
    int result; 
    char t;
    if(N<0){
    	printf("-");
    	N=fabs(N);
	}
    if(R<=10){
    	if(N<R)
      printf("%d",N);
    else
        {
            dectobin(N/R,R);
            printf("%d",N%R);
        }
	}
	else{
		if(N<R){ 
		if(N<10) printf("%d",N);
            else{
            	t='A'+N-10;
            	printf("%c",t);
		} 
	}
    else
        {
            dectobin(N/R,R);
            if(N%R<10) printf("%d",N%R);
            else{
            	t='A'+N%R-10;
            	printf("%c",t);
			}
        }
	}
    return result;
}
