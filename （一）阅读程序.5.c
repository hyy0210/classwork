#include <stdio.h> 
int main()   
{     
int i,j,m,n ;   
  i=8;j=10;   
 // m=++i;
  m=i++ ;  
 // n=j++;
  n=++j ;  
  printf("%d,%d,%d,%d\n",i,j,m,n);       
        return 0; 
}   
//第一次运行结果9，11，9，10
//第二次运行结果为9，11，8，11
//第三次运行结果为  错误