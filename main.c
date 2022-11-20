#include <stdio.h>
#include <stdlib.h>

#include "functions.c"
#include "init.c"

// importation des structures des données
#include "document.h"
#include "book.h"
#include "magazine.h"
#include "article.h"
#include "data.h"

// importation des différents fonctionnalités

#include "document.c"
#include "article.c"
#include "book.c"
#include "magazine.c"

int main(){
    int * choice;
    choice=(int*)malloc(sizeof(int));
    startup();





    while(1){
        system("CLS");
        printf("\n\t\tGestBiblioC");
        printf("\n\n\t");
        printf("please select one operation :");
        printf("\n\t 1- Add Book");
        printf("\n\t 2- Add Magazine");
        printf("\n\t 3- add Article");
        printf("\n ");
        printf("\n\t 0 Exit");
        printf("\n\n\t Selected operation ::  ");
        scanf("%d",choice);
        execute(choice);
    }

    return 0;
}

void execute( int * cmd){
    switch (*cmd){
        case 0:
            printf("end Of the program");
            exit(1);
        case 1:
            addBook();
          break;

        case 2:
            addMagazine();
          break;

        case 3:
            addArticle();
          break;

        default:
            printf("please select valid operation ");
    }
}
