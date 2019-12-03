#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *ptr;
	ptr=fopen("file.txt","w"); //creating the txt file
	if (ptr==NULL)
	{
	   printf("File is not open");
	}
	else
	 {
	    printf("file is open\n");
	  }
	fprintf(ptr,"%s\n%s","The mean of the numbers is: 3383.50","The variance of the numbers is: 9055261.05"); //writing in txt file
	fclose(ptr); //close the txt file
	return 0;
}
