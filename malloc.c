#include <stdio.h>
#include <stdlib.h>

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
int main()
{
	int i;
	float n=100,arr[100];
	float *ptr;
	ptr=(float*)malloc(n*sizeof(float));
	if (ptr==NULL)
	{
		printf("Memory not allocated.\n");
	}
	else
	{
		printf("Memory successfully allocated.\n");
	
	for (i=0;i<n;i++)
	{
		ptr[i]=(i+1)*(i+1);
	}

	float *p=f(ptr,100,arr);
	printf("The mean is:  %f\nThe variance is:  %f\n",p[0],p[1]);
	free(ptr);
        printf("Memory is cleared");
	
	}
	return 0;
}
