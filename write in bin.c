#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *ptr;
	char ch[]="The mean of the numbers is: 3383.50\nThe variance of the numbers is: 9055261.05";
	ptr=fopen("file2.bin","wb"); //creating the binary file
	if (ptr==NULL)
	{
	    printf("File is not open");
	}
	else
	 {
	    printf("file is open\n");
	 }
	fwrite(ch,sizeof(ch),1,ptr); //writing in binary file
	fclose(ptr); //close the binary file
	return 0;
}
