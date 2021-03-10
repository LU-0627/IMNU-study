#include<stdio.h>
void swap( int *p1,int *p2);
int main( )
{int a,b, *p1,*p2;
scanf("a=%d,b=%d",&a,&b);
p1=&a;p2=&b;
if(a<b) swap(p1,p2);
printf("a=%d,b=%d\n",a,b);
printf("max=%d,min=%d\n",*p1,*p2);
return 0;
}


/* 请在这里填写答案 */
void swap( int *p1,int *p2)
{
	int temp,max,min;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
	if(*p1>*p2){
		max=*p1;
		min=*p2;
	}
	else{
		max=*p2;
		min=*p1;
	}
}
