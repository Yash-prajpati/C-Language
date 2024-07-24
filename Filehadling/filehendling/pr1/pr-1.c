#include <stdio.h>
#include <stdlib.h> 

int main() {
	FILE *file1, *file2;
    char fileread[100], filewrite[100];
    int c;

    printf("Enter file name where you want to read: ");
    scanf("%s", fileread);

    file1 = fopen(fileread, "r");
    if (file1 == NULL) {
        printf("Cannot open file %s for reading\n", fileread);
        exit(1);
    }

    printf("Enter file name where you wrote: ");
    scanf("%s", filewrite);

    file2 = fopen(filewrite, "w");
    if (file2 == NULL) {
        printf("Cannot open file %s for writing\n", filewrite);
        fclose(fileread);
        exit(1);
    }
    while ((c = fgetc(fileread)) != EOF) {
        fputc(c, filewrite);
    }

    printf("the data of wrote file sended to reading file %s to %s\n", fileread, filewrite);

    fclose(fileread);
    fclose(filewrite);

}

