#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {

    char input[200];

    char file_name[50]; 

    const char* WRITE_MODE_APPEND = "a";

    FILE *fptr ;

    printf("Enter the file name: \n");
    scanf("%s", file_name);

    fptr = fopen(file_name, WRITE_MODE_APPEND);

    printf("Enter !q to exit \nOtherwise type to write to file: \n");

    while (true)
    {
        scanf("%s", input);

        if (! strcmp(input, "!q")) {
            printf("Wanna Quit?? [Y]es/[N]o\n");

            char confirm[3];

            scanf("%s", confirm);

            if (! strcmp(confirm, "Y") || ! strcmp(confirm, "y") || ! strcmp(confirm, "yes" ) || ! strcmp(confirm, "Yes")) {
                break;
            }
        } 

        int size = ftell(fptr);

        if (size != 0) {
            fprintf(fptr,"%s", "\n");
        }
        
        fprintf(fptr,"%s", input);
    }
      
    fclose(fptr);  
}