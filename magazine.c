#include "magazine.h"
#include "data.h"


magazine * createMagazine( char*ucode,int*freq){
    magazine * ptr = (magazine*)malloc(sizeof(magazine));
    ptr->ucode=ucode;
    ptr->freq = freq;
    return ptr;
}


void afficherMagazine(magazine* p){
    printf("\n\tBook : %s",p->ucode);
    printf("\n\t\tFrequence : %d",*(p->freq));
}

void addMagazine(){
    char    *   ucode   ;
    char    *   title   ;
    char    *   room    ;
    char    *   ran     ;
    int     *   nbexp   ;

    int     *   freq    ;


    nbexp = (int*)malloc(sizeof(int));
    freq = (int*)malloc(sizeof(int));

    system("CLS");
    printf("\n\t Adding Magazine Operation :");

    printf("\n\n\tMagazine UCode : ");
    ucode = RStr();
    printf("\n\n\tMagazine Title : ");
    title = RStr();

    printf("\n\n\tMagazine Room : ");
    room = RStr();
    printf("\n\n\tMagazine ran : ");
    ran = RStr();

    printf("\n\n\tMagazine set freq init : ");
    scanf("%d",freq);

    printf("\n\n\tMagazine Number exemplaires : ");
    scanf("%d",nbexp);


    document * d ;
    d = createDocument(ucode,title,room,ran,nbexp);


    magazine * m;
    m = createMagazine(ucode,freq);


    system("CLS");
    printf("\n\n");

    afficherDocument(d);
    afficherMagazine(m);

    storedocument(d);
    storemagazine(m);
}
