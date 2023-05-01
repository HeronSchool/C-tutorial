// problem 2581
#include <stdio.h>
#define N 10000
main()
{
  int i, j, a[N+1];
  int k, m, n;
  int sum = 0, check = 0, first = 0;

  // initialize
  for (a[1] = 0, i = 2; i <= N; i++) a[i] = 1;

  // sieve
  for(i = 2; i <= N/2; i++)
    for(j = 2; j <= N/i; j++)
      a[i*j] = 0;

  scanf(" %d %d", &m, &n);
  for(k = m; k <= n; k++)
  {
    if(a[k]) 
    {
      if(!check)
      {
        first = k;
        check = 1; 
      }
      sum += k;
    }
  }

  if(first)
  {
      printf("%d\n", sum);
      printf("%d", first);
  }
  else printf("-1");
}