#include <stdio.h>

void IntSwap(int *x, int *y);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    IntSwap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}

/* ���ύ�Ĵ��뽫��Ƕ������ */
void IntSwap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
 } 
