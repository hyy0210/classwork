int sum_array(int a[], int n)
 {
    int sum = 0;
    int *p = a;
    while (p < a + n) { 
        sum += *p;
        p++;
    }
    return sum;
}


 int main()
  {
    int arr[] = {1,2,3,4};
     printf("%d\n", sum_array(arr, 4)); // 输出10
     return 0;
 }