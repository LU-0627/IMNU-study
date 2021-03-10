#include <stdio.h>

void IntSwap(int *x, int *y);
void IntSort3(int *x, int *y, int *z);

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    IntSort3(&a, &b, &c);
    printf("%d %d %d\n", a, b, c);
    return 0;
}

void IntSwap(int *x, int *y)
{
	int temp;
    if(*x<*y){
    	temp=*x;
    	*x=*y;
    	*y=temp;
	}
}

/* 你提交的代码将被嵌在这里 */
void IntSort3(int *x, int *y, int *z)
{
	int temp;
	if(*z>*x){
		temp=*z;
		*x=*z;
		*z=temp;
	}
	else if(*z>*y){
		temp=*z;
		*z=*y;
		*y=temp;
	} 
 } 
