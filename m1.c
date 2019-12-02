#include <stdio.h>
#include <stdlib.h>
#include "function.h"
float *f(float *x,float n,float *arr)
    {
    	int i;
	float s=0,t=0;
    	for (i=0;i<n;i++)
	    {
		  s=s+x[i];
		  t=t+(x[i]*x[i]);
	    }
	    arr[0]=s/n;
	    arr[1]=(t/n)-(s*s)/(n*n);
	    return arr;
    }
