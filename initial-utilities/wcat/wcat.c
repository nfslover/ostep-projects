#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[]){
    
    FILE *fp;
    char buff[BUFFER_SIZE];

    for (size_t i = 1; i < argc; i++){
        fp = fopen(argv[i], "r");
        if (fp == NULL){
            printf("wcat: cannot open file\n");
            exit(EXIT_FAILURE);
        }

        while (fgets(buff, BUFFER_SIZE, fp))
            printf("%s", buff);

        fclose(fp);
    }

    return 0;

}