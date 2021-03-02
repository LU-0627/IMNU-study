#include <stdio.h>
#include <math.h>
int main()
{
	double x1,x2,y1,y2,d,x,y;
	
	scanf("%lf,%lf\n%lf,%lf",&x1,&y1,&x2,&y2);
	
	x=fabs(x1-x2);
	y=fabs(y1-y2);
	d=x+y;
	
	printf("%.2f",d);
	return 0;
 } 
