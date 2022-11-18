#include <stdio.h>
#include <stdlib.h>

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


int main()
{

    doclist     * docs;
    maglist     * mags;
    artlist     * arts;
    booklist    * books;

    printf("%x\n",docs);
    printf("%d\n",books);
    printf("%x\n",mags);
    printf("%x\n",arts);

    document * a;

    updateDocument(a);


    return 0;

}

