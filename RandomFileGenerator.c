/*
 * Author:  Arthur Hinds 2013
 * Create a randomly generated binary file.
 */

#include <stdio.h>
#include <stdlib.h>
#include <openssl/rand.h>

int main(int argc, char **argv){

    if (argc != 3) {
        printf("Usage: RandomFileGenerator FilenameOut FileSizeMB\n");
        return -1;
    }
    
    unsigned char buffer[1024];
    int i, filesize;
    filesize = atoi(argv[2]);
    filesize = filesize*1024;
    FILE * fd;
    fd = fopen(argv[1], "wb");

    if (!fd){
        printf("Error Opening File for writing\n");
        return -1;
    }

    for(i=0;i<filesize;i++){
        if(!RAND_bytes(buffer, 1024)){
            printf("Randomness failed\n");
            return -1;
        }
        fwrite(buffer, sizeof(buffer), 1, fd);

    }

}
