// problem 17827
// linked list to array
// 달팽이 리스트

#include <stdio.h>
#define N 200000
static int key[N+1];

int main()
{
  int n, m, v, k;
  int i, result;
  // n : 노드의 개수
  // m : 질문의 횟수
  // v : n번 노드가 가리키는 노드 번호
  // k : 1번 노드부터 k번 이동
  scanf(" %d %d %d", &n, &m, &v);

  int circle_node = n - v + 1;
  int non_circle_node = n - circle_node;

  for(i = 1; i <= n; i++)
  {
    scanf(" %d", &key[i]);
  }

  for(i = 0; i < m; i++)
  {
    scanf(" %d", &k);
    // k    : 1 2 ~ 9  10 ~ 17  18 ~ 25
    // node : 2 3 ~ 10  3  ~ 10  3 ~ 10
    // k = 1 -> node : 1 + k
    // k = 2 + (8 cycle) -> 1 + ( ((k-2) % 8) + 2 )
    if(k < non_circle_node)
    {
      result = 1 + k;
      printf("%d\n", key[result]);
    }
    else
    {
      result = 1 + non_circle_node + (k - non_circle_node) % circle_node;
      printf("%d\n", key[result]);
    }
  }
  return 0;
}
