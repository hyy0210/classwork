#include <stdio.h>
 int main()
{ 
    int x ,y ;
    scanf("%d",&x);
    if (x<0)
    y=x-3;
    if (x>0) 
    y=x+3;
    else y=x;
    printf("y=%d\n" , y); 
    return 0;
 }