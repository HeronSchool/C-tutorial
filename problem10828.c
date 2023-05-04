// problem 10828
// 스택
// never be null? -> char pointer initialize

#include <stdio.h>
#include <stdlib.h>
#define max 10000
static int stack[max+1], p;

void stackinit()
{ p = 0; }

int stackempty()
{ 
  if(!p) return 1;
  else return 0;
}

void push (int v)
{ stack[p++] = v; }

int pop()
{  
  if(stackempty()) return -1;
  else return stack[--p];
}

int size()
{ return p; }

int top()
{
  if(stackempty()) return -1;
  else return stack[p-1];
}

int main()
{
  int n, i, value;  
  char *s = (char *) malloc(sizeof *s);
  stackinit();

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
      printf("%d\n", stackempty());
    }
    else if(!strcmp(s, "top"))
    {
      printf("%d\n", top());
    }
  }

  return 0;
}