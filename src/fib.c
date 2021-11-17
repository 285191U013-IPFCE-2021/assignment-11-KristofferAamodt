/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)
{
    //Pre-condition
    assert(n>=1);

    //Post-condition
    if(n==1 || n==2)
    {
        return pp;
    }
    else
    {
        return fib(n-1,pp,p+pp);
    }

    return 0;

}
