#include <stdio.h>

int *find_middle(int a[], int n)
{
    int mid_index = n / 2;  
    return &a[mid_index];  
}
int main() 
{
    int arr1[] = {1, 2, 3, 4, 5};  
    int arr2[] = {10, 20, 30, 40}; 
    printf("arr1中间元素:%d\n", *find_middle(arr1, 5));  
    printf("arr2中间元素:%d\n", *find_middle(arr2, 4));  
    return 0;
}