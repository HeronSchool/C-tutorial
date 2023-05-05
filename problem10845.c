// problem 10845
// 큐

#include <stdio.h>
#include <stdlib.h>
#define max 10000
int queue[max+1], head, tail;

queueinit()
{
  head = 0; tail = 0;
}
int queueempty()
{
  return head == tail;
}
push(int x)
{
  queue[tail++] = x;
}
int pop()
{
  if (queueempty()) return -1; // check first
  else return queue[head++];
}
int size()
{
  return (tail - head);
}
int front()
{
  if(queueempty()) return -1;
  else return queue[head];
}
int back()
{
  if(queueempty()) return -1;
  else return queue[tail-1];
}

main()
{
  int n, i, value;
  // n : 명령의 수

  char * s = (char *) malloc(sizeof *s);

  queueinit();

  scanf(" %d", &n);
  for(i = 0; i < n; i++)
  {
    scanf(" %s", s);

    if(!strcmp(s, "push"))
    {
      scanf(" %d", &value);
      push(value);
    }
    else if(!strcmp(s, "pop"))
    {
      printf("%d\n", pop());
    }
    else if(!strcmp(s, "size"))
    {
      printf("%d\n", size());
    }
    else if(!strcmp(s, "empty"))
    {
      printf("%d\n", queueempty());
    }
    else if(!strcmp(s, "front"))
    {
      printf("%d\n", front());
    }
    else if(!strcmp(s, "back"))
    {
      printf("%d\n", back());
    }
  }

  return 0;
}