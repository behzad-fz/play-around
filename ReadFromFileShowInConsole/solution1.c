#include <stdio.h>

int main () {
   FILE *fptr;
   char str[200];

   fptr = fopen("file.txt" , "r");

   if(fptr == NULL) {
      perror("Error opening file");
      return(-1);
   }

   if( fgets (str, 200, fptr)!= NULL ) {
      puts(str);
   }

   fclose(fptr);
   
   return(0);
}