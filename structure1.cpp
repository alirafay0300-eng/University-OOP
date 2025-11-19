#include<iostream>
#include<string>
using namespace std;

int main()
{
    struct Library
    {
        int ISBN, copies, PYear;
        char bookName[30], AuthorName[30], PublisherName[30];
    };
    Library libVar;

    libVar.ISBN=1293;
    strcpy(libVar.bookName,"Network Security");
    strcpy(libVar.AuthorName,"Noman");
    strcpy(libVar.PublisherName,"Ahmad");
    libVar.copies=6;
    libVar.PYear=2010;

    cout << "ISBN Number: " << libVar.ISBN << endl;
    cout << "Library Book Name: " << libVar.bookName << endl;
    cout << "Author Name: " << libVar.AuthorName << endl;
    cout << "Publisher: " << libVar.PublisherName << endl;
    cout << "No Of Copies: " << libVar.copies << endl;
    cout << "Year: " << libVar.PYear << endl;
    return 0;

}