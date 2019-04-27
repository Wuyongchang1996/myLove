#include<stdio.h>
int main(void)
{
	int year,mouth,day,i,D;
	int Mouth[11]={31,28,31,30,31,30,31,31,30,31,30};
	scanf("%d-%d-%d",&year,&mouth,&day);
	if(year%4==0&&year%100!=0||year%400==0)
	  Mouth[1]=29;
    D=0;
    if(mouth>1)
    {
   	   for(i=0;i<mouth-1;i++)
          D+=Mouth[i];
    }
    D+=day;
    printf("%d",D);
    return 0;
}
/*
2007-01-01
*/