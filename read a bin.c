#include <stdio.h>
#include <stdlib.h>
int main()
{
  char ch;
  FILE *ptr;
  ptr=fopen("file2.bin","rb"); //opening the binary file in reading mode
  if (ptr==NULL)
    printf("File is not open");
  while (ch!=EOF)
    {
  ch=fgetc(ptr);
  putchar(ch); //printing the contents of binary file
    }
  fclose(ptr); //close the binary file
  return 0;
}
    
