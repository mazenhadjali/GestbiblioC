#include <windows.h>
#include "data.h"
#include <unistd.h>
#include "config.h"
#include <stdbool.h>
#include <dirent.h>
#include <stdio.h>


void exportdocs(){

    chdir(path);
    chdir("./data/docsdir");

    DIR *folder;
    struct dirent *entry;

    folder = opendir(".");

    if(folder == NULL){
        perror("Unable to read directory");
        return(1);
    }

    while( entry=readdir(folder) )
        if(entry->d_namlen!=1 && entry->d_namlen!=2)
            remove(entry->d_name);



    if (docs == NULL )
        return;

    if (docs->premier != NULL)
    {
        docElement *currentElement = docs->premier;
        document * d ;
        FILE *f;
        char * filename = malloc(1) ;
        do{
            d = currentElement->doc;
            realloc(filename,strlen(d->ucode) + 5);

            strcpy(filename,d->ucode);
            strcat(filename,".txt");

            f=fopen(filename,"w");
            fprintf(f,"%s\n%s\n%s\n%s\n%d\n",d->ucode,d->title,d->room,d->ran,*(d->nbexp));
            fclose(f);

            free(filename);
            currentElement = currentElement->next;

        }while(currentElement);

    }

        closedir(folder);
        printf("\n end Of the program \n \n ");
}
