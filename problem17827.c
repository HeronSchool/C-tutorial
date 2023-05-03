// problem 17827
// 달팽이 리스트
#include <stdio.h>
#define max 200000

long key[max];
long question[max];

main()
{
  long n, m, v;
  long i, key_value, jump, circle_nodes, circle_times, not_circle_nodes;
  scanf(" %ld %ld %ld", &n, &m, &v);

  circle_nodes = n - v + 1;
  not_circle_nodes = n - circle_nodes;

  for(i = 0; i < n; i++)
  {
    scanf(" %d", &key_value);
    key[i] = key_value;
  }

  for(i = 0; i < m; i++)
  {
    scanf(" %d", &jump);
    question[i] = jump;
  }

  for(i = 0; i < m; i++)
  {
      jump = question[i];
      if(jump < (n - circle_nodes))
        printf("%d\n", key[jump]);
      else
      {
        circle_times = (jump - not_circle_nodes) / circle_nodes;
        printf("%d\n", key[jump - circle_nodes * circle_times]);
      }
  }
}