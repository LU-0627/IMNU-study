#include<stdio.h>
long f(int A,int B);
int main()
{
    int A,B,i,c=0;
    long sum;
    scanf("%d %d",&A,&B); 
    sum=f(A,B);
    printf("Sum = %d",sum);    
}

/* ����������д�� */
long f(int A,int B){
	int i;
	long sum=1;
	for(i=A;i<=B;i++){
		sum=sum*i;
	}
	return sum;
}
