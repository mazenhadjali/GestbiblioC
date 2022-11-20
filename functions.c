#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<assert.h>
#include "data.h"
#include "document.h"
char* RStr(){
    char *  str = malloc(128);
    gets(str);
    str = (char*) realloc(str,strlen(str));
    fflush(stdin);
    return str;
}


void storedocument(document* data){

    docElement  *    nouveau ;
    nouveau = (docElement*)malloc(sizeof(docElement));
    if (docs == NULL || nouveau == NULL )
    {
        exit(EXIT_FAILURE);
    }

    nouveau->doc = data;
    nouveau->next = NULL;



    if (docs->premier != NULL)
    {
        docElement *elementActuel = docs->premier;
        while (elementActuel->next != NULL)
        {
            elementActuel = elementActuel->next;
        }
        elementActuel->next = nouveau;
    }
    else
        docs->premier = nouveau;
}

void storebook (book * data){

    bookElement  *    nouveau ;
    nouveau = (bookElement*)malloc(sizeof(bookElement));

    if (books == NULL || nouveau == NULL )
    {
        exit(EXIT_FAILURE);
    }

    nouveau->book = data;
    nouveau->next = NULL;


    if (books->premier != NULL) /* La file n'est pas vide */
    {
        /* On se positionne à la fin de la file */
        bookElement *elementActuel = books->premier;
        while (elementActuel->next != NULL)
        {
            elementActuel = elementActuel->next;
        }
        elementActuel->next = nouveau;
    }
    else /* La file est vide, notre élément est le premier */
    {
        books->premier = nouveau;
    }
}

void storemagazine (magazine * data){

    magazineElement  *    nouveau ;
    nouveau = (magazineElement*)malloc(sizeof(magazineElement));
    if (mags == NULL || nouveau == NULL )
    {
        exit(EXIT_FAILURE);
    }

    nouveau->mag = data;
    nouveau->next = NULL;

    if (mags->premier != NULL) /* La file n'est pas vide */
    {
        /* On se positionne à la fin de la file */
        magazineElement *elementActuel = mags->premier;
        while (elementActuel->next != NULL)
        {
            elementActuel = elementActuel->next;
        }
        elementActuel->next = nouveau;
    }
    else /* La file est vide, notre élément est le premier */
    {
        mags->premier = nouveau;
    }
}

void storearticle (article * data){

    articleElement  *    nouveau ;
    nouveau = (articleElement*)malloc(sizeof(articleElement));
    if (arts == NULL || nouveau == NULL )
    {
        exit(EXIT_FAILURE);
    }

    nouveau->art = data;
    nouveau->next = NULL;

    if (arts->premier != NULL) /* La file n'est pas vide */
    {
        /* On se positionne à la fin de la file */
        articleElement *elementActuel = arts->premier;
        while (elementActuel->next != NULL)
        {
            elementActuel = elementActuel->next;
        }
        elementActuel->next = nouveau;
    }
    else /* La file est vide, notre élément est le premier */
    {
        arts->premier = nouveau;
    }
}


