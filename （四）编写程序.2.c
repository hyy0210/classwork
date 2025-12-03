#include <stdbool.h> 
bool search(int a[], int n, int key)
 {
    int *p = a; 
    while (p < a + n) { 
        if (*p == key) {
            return true;
        }
        p++;
    }
    return false;
}
int main() {
  int arr[] = {1,3,5,7};
     printf("%d\n", search(arr, 4, 5)); 
     return 0;
 }