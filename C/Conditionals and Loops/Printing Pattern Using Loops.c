#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

  int n;
  scanf("%d", &n);
  // Complete the code to print the pattern.
      
      
  int len = 2*n-1;
  for(int row=0; row<len; row++)
  {
    for(int col=0; col<len; col++)
    {
      int min = row<col? row:col;
      min=min<len-row? min:len-row-1;
      min=min<len-col? min:len-col-1;
      printf("%d ",n-min);
    }

    printf("\n");
  }

    return 0;
}