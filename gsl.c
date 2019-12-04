#include <gsl/gsl_statistics_float.h> //including GSL library
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
float *f(float *x,float n,float *arr) //function for finding mean and variance
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
int main()
{
int i;
float arr[2];
float* a=(float*)malloc(100*sizeof(float)); //malloc memory allocation
float m2,v2;
for(i=0;i<100;i++)
{
a[i]=(i+1)*(i+1);
}
float *m=f(a,100,arr);
m2=gsl_stats_float_mean(a,1,100); //mean from gsl library
v2=gsl_stats_float_variance(a,1,100);  //variance from gsl library
printf("The mean of the numbers is(by loop):%f\n",m[0]);
printf("The mean of the numbers is(by gsl):%f\n",m2);
printf("The variance of the numbers is(by loop):%f\n",m[1]);
printf("The variance of the numbers is(by gsl):%f\n",v2);
return(0);
free(a); //memory cleared
}
