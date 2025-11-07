y=    -1                   x>9 
x*(x+2)         3<x<=9 
2*x                  -1<x<=3 
x-1                  x<=-1 
#include <stdio.h> 
int main() 
    {  
  
int x ,y ; 
        
  
scanf(“%d”,&x); 
        
  
if (3<x<=9) y=x*(x+2); 
        
  
else if (-1<x<=3) y=2*x; 
        
  
else if (x<=-1)y=x-1; 
 
17 
 
        
  
else   y=-1; 
        
  
printf(“%d\n”, y); 
        
  
return 0; 
    }q 