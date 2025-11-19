#include<iostream>
#include<string>
using namespace std;

    struct Library
    {
        int ISBN, copies, PYear;
        char bookName[30], AuthorName[30], PublisherName[30];
    };

    int main(){
        Library books[3];

        for(int i=0; i < 3;i++)
        {
            cout<<"\n Enter details of books"<< i+1 <<"\n";

            cout <<"ISBN:";
            cin>>books[i].ISBN;
            cin.ignore();

            cout <<"Book Name :";
            cin.getline(books[i].bookName,30);

            cout <<"Author Name :";
            cin.getline(books[i].AuthorName,30) ;

            cout <<"Publisher Name:";
            cin.getline(books[i].PublisherName,30);

            cout <<"Copies:";
            cin>>books[i].copies;

            cout <<"Publication year :";
            cin>>books[i].PYear;
        }

        cout<<"\n ---Displaying Books---";
        for(int i= 0; i<3;i++)
        {
            cout<<"\n Books"<<i+1<<":\n";
            cout << "ISBN Number: " << books[i].ISBN << endl;
            cout << "Library Book Name: " << books[i].bookName << endl;
            cout << "Author Name: " << books[i].AuthorName << endl;
            cout << "Publisher: " << books[i].PublisherName << endl;
            cout << "No Of Copies: " << books[i].copies << endl;
            cout << "Year: " << books[i].PYear << endl;
        }

        return 0;
    }