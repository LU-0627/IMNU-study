#include <stdio.h>
int  f ( int n ) ;

int main(void)
{   int i ,n ;
    scanf("%d",&n);  
    for(i=1; i<=n;  i++)
       if( f(i)==1 )  printf("%d", i )  ;  // ��6�ı��������
  return 0;
}
/* ����������д�� */
int  f ( int n ) {
	if(n%6==0){
		return 1;
	}
	else{
		return 0;
	}
} 
