#include <gsl/gsl_statistics_float.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "function.h"

int main()
{
int i;
float m[2];
float* a=(float*)malloc(100*sizeof(float));
float mean,var,m2,v2;
for(i=0;i<100;i++)
{
a[i]=(i+1)*(i+1);
}
m[0]=*f(a,100,arr);
m[1]=*(f(a,100,arr)+1);
m2=gsl_stats_float_mean(a,1,100);
v2=gsl_stats_float_variance(a,1,100);  /*variance and mean from gsl library*/
printf("The mean is(by loop):%f\n",m[0]);
printf("The mean is(by gsl):%f\n",m2);
printf("The variance is:%f\n(by loop)",m[1]);
printf("The variance is:%f\n(by gsl)",v2);
return(0);
free(a);
}
