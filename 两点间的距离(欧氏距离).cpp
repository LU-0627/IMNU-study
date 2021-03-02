#include <stdio.h>
#include <math.h>
int main()
{
	double x1,x2,y1,y2,z1,z2,d,x,y,z;
	
	scanf("%lf,%lf,%lf\n %lf,%lf,%lf",&x1,&y1,&z1,&x2,&y2,&z2);
	
	x=pow(x1-x2,2);
	y=pow(y1-y2,2);
	z=pow(z1-z2,2);
	
	d=sqrt(x+y+z);
	
	printf("%.2f",d);
	return 0;
}
