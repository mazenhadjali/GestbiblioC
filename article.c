#include "data.h"
#include "article.h"

article * createArticle( char*ucode,char*auther,int*jour,int*month,int*year){

    article * ptr = (article*)malloc(sizeof(article));

    ptr->ucode=ucode;
    ptr->auther=auther;
    ptr->jour=jour;
    ptr->month=month;
    ptr->year=year;


    return ptr;

}

void afficherArticle(article* p){
    printf("\n\tArticle : %s",p->ucode);
    printf("\n\t\tAuther : %s",p->auther);
    printf("\n\t\tDate:\t%d\\%d\\%d",*(p->jour),*(p->month),*(p->year));
}


void addArticle(){

    char    *   ucode   ;
    char    *   title   ;
    char    *   room    ;
    char    *   ran     ;
    int     *   nbexp   ;

    char    *   auther  ;
    int     *   jour    ;
    int     *   month   ;
    int     *   year    ;


    nbexp = (int*)malloc(sizeof(int));
    jour = (int*)malloc(sizeof(int));
    month = (int*)malloc(sizeof(int));
    year = (int*)malloc(sizeof(int));

    system("CLS");
    printf("\n\t Ading Article Operation :");

    printf("\n\n\tArticle UCode : ");
    ucode = RStr();

    printf("\n\n\tArticle Title : ");
    title = RStr();

    printf("\n\n\tArticle Auther : ");
    auther = RStr();

    printf("\n\n\tArticle Room : ");
    room = RStr();

    printf("\n\n\tArticle ran : ");
    ran = RStr();

    printf("\n\n\tArticle Date [ JJ/MM/YYYY ] : ");
    scanf("%d/%d/%d",jour,month,year);


    printf("\n\n\tArticle Number exemplaires : ");
    scanf("%d",nbexp);


    document * d ;
    d = createDocument(ucode,title,room,ran,nbexp);

    article * a;
    a = createArticle(ucode,auther,jour,month,year);

    system("CLS");
    printf("\n\n");


    afficherDocument(d);
    afficherArticle(a);
    storedocument(d);
    storearticle(a);
}
