#include<stdio.h>
int main()
{
    int T,year,month,date,t,i,sum;
    scanf("%d",&T);
    if(T<=100)
    {
    t=0;
    int a[11]={31,28,31,30,31,30,31,31,30,31,30};
    while(scanf("%d %d %d",&year,&month,&date)!=EOF)
    {
        sum=0;
        if(year==2017&&month==10&&date<28)
          sum=28-date;
        if(year==2017&&month<10)
        {
            for(i=month-1;i<10;i++)
               sum+=a[i];
            sum+=(28-date);
        }
        if(year<2017&&year<=1900)
        {
            for(i=year;i<2017;i++)
            {
                if(year%4==0&&year%100!=0||year%400==0)
                  sum+=366;
                else sum+=365;
            }
            sum+=301;
            if(year%4==0&&year%100!=0||year%400==0)
            {
                a[1]=29;
                for(i=0;i<month-1;i++)
                   sum-=a[i];
            }
            else
            for(i=0;i<month-1;i++)
                   sum-=a[i];
            sum-=date;
        }
        printf("%d\n",sum);
        t++;
        if(t==T) break;
    }
    }
    return 0;
}
