#include<stdio.h>
#include<math.h>
int main()
{
	double pai,pi,temp,d,b;
	float f;
	while(scanf("%f",&f)!=EOF)
	{
		pi=0;
		d=1;
		b=1;
		do
		{
		temp=b/d;
		pi+=temp;
		d+=2;
		b=-b;		
		}while(f<=fabs(temp));
		pai=4*pi;
		printf("%.6lf\n",pai);
	}
	return 0;
}
