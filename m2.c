#include <stdio.h>
#include <stdlib.h>
#include "function.h" //including header file
int main()
{
	int i;
	float n=100,arr[100];
	float *ptr;
	ptr=(float*)malloc(n*sizeof(float));
	if (ptr==NULL)
	{
		printf("Memory is not allocated.\n");
	}
	else
	{
		printf("Memory is successfully allocated.\n");
	
	for (i=0;i<n;i++)
	{
		ptr[i]=(i+1)*(i+1);
	}

	float *p=f(ptr,100,arr); //function call
	printf("The mean of the numbers is:  %f\nThe variance of the numbers is:  %f\n",p[0],p[1]);
	free(ptr); //malloc memory clear
        printf("Memory is cleared");
	}
	return 0;
}
