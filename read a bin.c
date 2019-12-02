#include <stdio.h>
#include <stdlib.h>
int main()
{
  char ch;
  FILE *ptr;
  ptr=fopen("file2.bin","rb");
  if (ptr==NULL)
    printf("File is not open");
  while (ch!=EOF)
       {
  ch=fgetc(ptr);
  putchar(ch);
    }
  fclose(ptr);
  return 0;
}
    
