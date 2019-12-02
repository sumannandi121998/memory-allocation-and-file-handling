#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *ptr;
	char ch[]="The mean is: 3383.5\nThe variance is: 9055261.0";
	ptr=fopen("file2.bin","wb");
	if (ptr==NULL)
	{
		printf("Error");
	}
	else
	  {
	    printf("file is open\n");
	      }
	fwrite(ch,sizeof(ch),1,ptr);
	fclose(ptr);
	return 0;
}
