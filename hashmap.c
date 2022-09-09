#include <stdlib.h>
#include <stdio.h>

struct hashLink {
    
}
int main(int argc, char *argv[] ){
    char* fileName = argv[1];
    FILE *fp;
    char buffer[255];
    char *token;

    fp = fopen ( fileName, "r");
    // use fgets()
    while (fgets (buffer, 255, fp) != NULL) {
        printf("%s", buffer);
        token = strtok(buffer, " ");
    }
    //printf("%s\n", buffer);

    return 0;
}