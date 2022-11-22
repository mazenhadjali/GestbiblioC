#include <windows.h>
#include "data.h"
#include <unistd.h>
#include "config.h"
#include <stdbool.h>
#include <dirent.h>
#include <stdio.h>


void startup(){

    // 0 - black background,
    // A - Green Foreground
    system("color 0A");
    printf("\n\n\n\n");
    printf("Loading :\\\\ \t ");
    docs    =  (doclist*)   malloc(sizeof(doclist))     ;
    docs->premier=NULL;

    books   =  (booklist*)  malloc(sizeof(booklist))    ;
    books->premier=NULL;

    arts    =  (artlist*)   malloc(sizeof(artlist))     ;
    arts->premier=NULL;

    mags    =  (maglist*)   malloc(sizeof(maglist))     ;
    mags->premier=NULL;

    path = (char*) malloc(sizeof(char)*256);
    getcwd(path, 256);
    realloc(path,strlen(path));

    mkdir("data");

    char* booksdir  =   "./data/booksdir"  ;
    char* magsdir   =   "./data/magsdir"   ;
    char* artsdir   =   "./data/artsdir"   ;
    char* docsdir   =   "./data/docsdir"   ;

    mkdir(booksdir);
    mkdir(magsdir);
    mkdir(artsdir);
    mkdir(docsdir);

/*
    FILE *in_file  = fopen("./docsdir/mazen.txt", "r"); // read only
    char * row = malloc(256);

    if (in_file == NULL ){
              printf("Error! Could not open file\n");
              exit(-1); // must include stdlib.h
              }

    while (( fgets(row,256,in_file) ) != NULL )
        puts( row );
*/

//*****************************************************
/*
    DIR *folder;
    struct dirent *entry;
    int  files = 0;

    folder = opendir("./docsdir");
    if(folder == NULL)
    {
        perror("Unable to read directory");
        return(1);
    }

    while( (entry=readdir(folder)) )
    {
        files++;
        printf("File %3d: %s\n",files,entry->d_name);
    }

    closedir(folder);
    */

//*****************************************************


    // Set the cursor again starting
    // point of loading bar
    // Print loading bar progress
    for (int i = 0; i < 25; i++,Sleep(10))
        printf("%c", 219);
    system("CLS");
}
