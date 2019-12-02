#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *ptr;
	ptr=fopen("file.txt","w");
	if (ptr==NULL)
	{
		printf("File is not open");
	}
	else
	  {
	    printf("file is open\n");
	      }
	fprintf(ptr,"%s\n%s","The mean is: 3383.5","The variance is: 9055261.0");
	fclose(ptr);
	return 0;
}
