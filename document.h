#ifndef DOCUMENT_H_INCLUDED
#define DOCUMENT_H_INCLUDED



typedef struct document {
    char * ucode ;
    char * title;
    char * room ;
    char * ran ;
    int * nbexp ;

}document;

document *  createDocument(); // create and generate new dpcument
void updateDocument (document * doc);
void removeDocment(document * doc);
document * getDocumentBy_ucode;





#endif // DOCUMENT_H_INCLUDED
