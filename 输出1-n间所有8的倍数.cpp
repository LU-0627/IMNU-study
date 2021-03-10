<<<<<<< HEAD
#include <stdio.h>
int  f ( int n ) ;

int main(void)
{   int i ,n ;
    scanf("%d",&n);  
    for(i=1; i<=n;  i++)
       if( f(i)==1 )  printf("%d", i )  ;  // 是8的倍数则输出
  return 0;
}
/* 请在这里填写答案 */
int  f ( int n ) 
{
	if(n%8==0){
		return 1;
	}
	else{
		return 0;
	}
 } 
=======
#include <stdio.h>
int  f ( int n ) ;

int main(void)
{   int i ,n ;
    scanf("%d",&n);  
    for(i=1; i<=n;  i++)
       if( f(i)==1 )  printf("%d", i )  ;  // 是8的倍数则输出
  return 0;
}
/* 请在这里填写答案 */
int  f ( int n ) 
{
	if(n%8==0){
		return 1;
	}
	else{
		return 0;
	}
 } 
>>>>>>> 5b7f17c4b8aaae91f1687f1af1a893724c6d8a82
