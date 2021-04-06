#include <stdio.h>

int main()
{
   FILE *fp;
   char str[1000];

   /* opening file for reading */
   fp = fopen("file.txt", "r");
   if (fp == NULL)
   {
      perror("Error opening file");
      return (-1);
   }
   while (fgets(str, 60, fp) != NULL)
   {
      /* writing content to stdout */
      printf(str);
   }
   fclose(fp);
}