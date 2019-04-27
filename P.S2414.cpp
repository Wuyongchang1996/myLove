#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float d,x1,x2;
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-4*a*c;
    if(a!=0)
    {
        if(d>0)
        {
        	x1=(-b-sqrt(d))/(2*a);
        	x2=(-b+sqrt(d))/(2*a);
            if(x1>x2)
            {
                printf("%f\n%f",x1,x2);
            }
            else
            {
                printf("%f\n%f",x2,x1);
            }
        }
        if(d==0)
        {
            printf("%f",-b/(2*a));
        }
        if(d<0)
        {
            printf("No");
        }
    }
    if(a==0)
    {
        if(b==0)
        {
            printf("No");
        }
        if(b!=0)
        {
            printf("%f",-c/b);
        }
    }
    return 0;
}
