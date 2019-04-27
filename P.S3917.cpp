#include<stdio.h>
int main(void)
{
    int n,number,pay,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&number);
        if(number<=100)
          pay=85*number;
        else if(number<=500)
          pay=70*number;
        else if(number<=1000)
          pay=60*number;
        else if(number<=5000)
          pay=50*number;
        else
          pay=30*number;
        printf("%d\n",pay);
    }
    return 0;
}
/*
2
1
1000
*/