#include<iostream>
#include<string>
using namespace std;

    struct Student
    {
        int roll;
        int marks;

        void input()
        {
            cout<<"Enterc roll no ";
            cin>>roll;
            cout<<"Enter Marks";
            cin>>marks;
        }

        void display()
        {
            cout<<"roll:"<<roll<<endl;
            cout<<"Marks"<<marks<<endl;
        }
    };

int main()
{
    Student s;
    s.input();
    s.display();

    return 0;
}
