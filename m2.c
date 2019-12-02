#include <stdio.h>
#include <stdlib.h>
#include "function.h"
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
