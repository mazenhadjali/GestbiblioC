
book * createBook( char*ucode,char*auther,char*editor,int*jour,int*month,int*year){
    book * ptr = (book*)malloc(sizeof(book));
    ptr->ucode=ucode;
    ptr->auther=auther;
    ptr->editor=editor;
    ptr->jour=jour;
    ptr->month=month;
    ptr->year=year;
    return ptr;
}


void afficherBook(book* p){

    printf("\n\tBook : %s",p->ucode);
    printf("\n\t\tAuther : %s",p->auther);
    printf("\n\t\tEditor : %s",p->editor);
    printf("\n\t\tDate:\t%d\\%d\\%d",*(p->jour),*(p->month),*(p->year));
}

void addBook(){
    char    *   ucode   ;
    char    *   title   ;
    char    *   room    ;
    char    *   ran     ;
    int     *   nbexp   ;

    char    *   auther  ;
    char    *   editor  ;
    int     *   jour    ;
    int     *   month   ;
    int     *   year    ;


    nbexp = (int*)malloc(sizeof(int));
    jour = (int*)malloc(sizeof(int));
    month = (int*)malloc(sizeof(int));
    year = (int*)malloc(sizeof(int));

    system("CLS");
    printf("\n\t Adding BOOK Operation :");

    printf("\n\n\tBook UCode : ");
    ucode = RStr();
    printf("\n\n\tBook Title : ");
    title = RStr();

    printf("\n\n\tBook Auther : ");
    auther = RStr();
    printf("\n\n\tBook Editor : ");
    editor = RStr();

    printf("\n\n\tBook Room : ");
    room = RStr();
    printf("\n\n\tBook ran : ");
    ran = RStr();

    printf("\n\n\tBook Date [ JJ/MM/YYYY ] : ");
    scanf("%d/%d/%d",jour,month,year);


    printf("\n\n\tBook Number exemplaires : ");
    scanf("%d",nbexp);


    document * d ;
    d = createDocument(ucode,title,room,ran,nbexp);


    book * b;
    b = createBook(ucode,auther,editor,jour,month,year);


    system("CLS");
    printf("\n\n");

    afficherDocument(d);
    afficherBook(b);
    storedocument(d);
    storebook(b);
}
