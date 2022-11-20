#include "document.h"
#include <stdlib.h>

document* createDocument(char* ucode , char * title , char * room , char * ran , int * nbexp){

    document * ptr ;
    ptr = (document *) malloc(sizeof(document));

    ptr->nbexp = nbexp;
    ptr->ucode = ucode;
    ptr->title = title;
    ptr->room = room;
    ptr->ran = ran;

    return ptr;

}

void afficherDocument(document* p){

    printf("\n\tDocument : %s",p->ucode);
    printf("\n\t\t : %s",p->title);
    printf("\n\t\t : %s",p->room);
    printf("\n\t\t : %s",p->ran);
    printf("\n\t\t : %d",*(p->nbexp));

}
