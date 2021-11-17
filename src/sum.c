#include "sum.h"

#include<stdio.h>
#include<assert.h>

/* Sum integers 1 to n */
int sum (int n)
{
/* pre-condition */
  assert (n >= 1);
/* post-condition */
  if (n > 1)
    return n + sum (n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail (int n, int total)
{
  //Pre-contidion
  assert(n>=1);
  assert(total>=0);

  //Post-condition
  if(n==1)
    return 1+total;
  else
  { 
    total = total + 1;
    n = n - 1; 
    return sumtail(n,total);
  }

}

/* Sum integers 1 to n */
int sumwhile (int n)
{
  //Pre-condition
  assert(n>=1);

  //Post-condition
  int sum =0;
  for(int i = 1; i<=n; i++)
    sum++;

  return sum;

}

