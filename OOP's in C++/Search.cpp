#include <iostream>
#include <conio.h>
using namespace std;

struct Book
{
    int book_id;
    char name[40];
    char author[20];
    int prize;
};
int main()
{
    int n;
    cout << "Enter the Number of Books in Library :";
    cin >> n;
    Book p[n];
    int i, id, index_value = -1;
    for (i = 0; i < n; i++)
    {
        cout << "Enter Your Book Id = ";
        cin >> p[i].book_id;
        cout << "Enter Your Book Name = ";
        cin >> p[i].name;
        cout << "Enter Your Book Author Name = ";
        cin >> p[i].author;
        cout << "Enter Prize of your Book = ";
        cin >> p[i].prize;
    }
    cout<<endl;
    cout << "Enter Book Id for Searching : ";
    cin >> id;
    for (i = 0; i < n; i++)
    {
        if (p[i].book_id == id)
        {
            index_value = i;
            break;
        }
    }
    if (index_value == -1)
    {
        cout << "Your Book is Not Found in Our Library";
    }
    else
    {
        cout << "After Searching Book Id is: " << p[i].book_id << endl;
        cout << "After Searching Book Name: " << p[i].name << endl;
        cout << "After Searching Author Name is: " << p[i].author << endl;
        cout << "After Searching Prize of Book is: " << p[i].prize << endl;
    }
    return 0;
}