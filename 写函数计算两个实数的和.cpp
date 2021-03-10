#include <stdio.h>

void CalFun( double *px, double *py, double *psum );

int main()
{    
    double sum, x, y; 

    scanf("%lf %lf", &x, &y);
    CalFun( &x, &y, &sum );
    printf("%.1f\n", sum);

    return 0;
} 

/* 你的代码将被嵌在这里 */
void CalFun( double *px, double  *py, double *psum )
{
	*psum=*px+*py;
 } 
