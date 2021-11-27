#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
   int *sum = (int *)malloc(n * sizeof(int));
   
  sum[0]=0; 
  sum[1]=a;
  sum[2]=b;
  sum[3]=c;

if (n>=4) {
    for (int i=4; i<=n; i++) {
        sum[i]=sum[i-1]+sum[i-2]+sum[i-3];
    }
}

return sum[n];

}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}