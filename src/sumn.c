#include "sumn.h"

#include<stdio.h>
#include<assert.h>

int sumn (int n)
{
    //Pre-condition
    assert(n >=1);

    //Post-condition
    if(n>1)
        return (2*n-1)+sumn(n-1);
    else
        return 1;

}