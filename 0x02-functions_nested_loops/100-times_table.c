#include <stdio.h>

void print_times_table(int n)
{
  int i;
  
  if (n < 0 || n > 15)
  {
    return;
  }
  for (i = 0; i <= n; i++)
  {
    for (int j = 0; j <= n; j++)
    {
      printf("%4d", i * j);
    }
    printf("\n");
  }
}
