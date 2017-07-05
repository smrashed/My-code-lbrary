#include<bits/stdc++.h>
using namespace std;

struct book_details
{
    char name[101];
    char edition[101];
    char author[101];
    char publication_date[101];
    double price;
    int page_number;

    /*int scan()
    {
        scanf("%lf",&price);
        printf("%.2lf",2.0*price);
        return 0;
    }*/
};

main()
{
     book_details book1,book2,book3;
     gets(book1.name);
     gets(book1.author);
     gets(book1.edition);
     gets(book1.publication_date);
     scanf("%lf %d",&book1.price,&book1.page_number);
     printf("\n");
     puts(book1.name);
     puts(book1.author);
     puts(book1.edition);
     puts(book1.publication_date);
     printf("%.2lf\n",book1.price);
     printf("%d\n",book1.page_number);
     //book1.scan();
     /*book1.price=12.36;
     printf("%.2lf",book1.price*2.0);*/
}
