<<<<<<< HEAD
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

/* 请在这里填写答案 */
long f(int A,int B){
	int i;
	long sum=0;
	for(i=A;i<=B;i++){
		sum=sum+i;
	}
	return sum;
}
=======
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

/* 请在这里填写答案 */
long f(int A,int B){
	int i;
	long sum=0;
	for(i=A;i<=B;i++){
		sum=sum+i;
	}
	return sum;
}
>>>>>>> 5b7f17c4b8aaae91f1687f1af1a893724c6d8a82
