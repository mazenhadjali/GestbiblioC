#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
#include "document.h"
#include "book.h"
#include "article.h"
#include "magazine.h"

typedef struct docElement docElement;
struct docElement
{
    document * doc;
    docElement *next;
};

typedef struct bookElement bookElement;
struct bookElement
{
    book * book;
    bookElement *next;
};

typedef struct articleElement articleElement;
struct articleElement
{
    article * art;
    articleElement *next;
};

typedef struct magazineElement magazineElement;
struct magazineElement
{
    magazine * mag;
    magazineElement *next;
};

// ***********************************
typedef struct doclist doclist;
    struct doclist{
        docElement * premier;
    };

typedef struct booklist booklist;
    struct booklist{
        bookElement * premier;
    };

typedef struct artlist artlist;
    struct artlist{
        articleElement * premier;
    };

typedef struct maglist maglist;
    struct maglist{
        magazineElement * premier;
    };

// ***********************************

#endif // DATA_H_INCLUDED
