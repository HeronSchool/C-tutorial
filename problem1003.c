// problem1003.c
//피보나치 함수
#include <stdio.h>
#define max 40
//int F[max];
int countzero[max+1]; // 반드시 +1 !!
int countone[max+1];

void fibonaccicount ()
{
  int i;
  //F[0] = 1;
  countzero[0] = 1;
  //F[1] = 1;
  countone[1] = 1; 

  for(i = 2; i <= max; i++) 
  { 
    //F[i] = F[i-1] + F[i-2];
    countzero[i] = countzero[i-1] + countzero[i-2];
    countone[i] = countone[i-1] + countone[i-2];
  }
}

main()
{
  int T, i;
  int fibo;
  
  scanf(" %d", &T);

  fibonaccicount();

  for(i = 0; i < T; i++)
  {
    scanf(" %d", &fibo);
    printf("%d %d\n", countzero[fibo], countone[fibo]);
  }

  return 0;
}
