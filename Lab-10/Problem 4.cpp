#include <iostream>
using namespace std;

// A structure for book
struct Book {
    char title[100];
    char author[100];
    int no_of_pages;
    int price;
};

union Shirt {
    char color[100];
    char size[100];
    char design[50];
    int price;
};

int main() {
    Book b;
  
    cout << "Enter title of book\n";
    cin.getline(b.title, 100);
    cout << "Enter Author of book\n";
    cin.getline(b.author, 100);
    cout << "Enter No. of pages\n";
    cin >> b.no_of_pages;
    cout << "Enter Price of Book\n";
    cin >> b.price;

    // Printing Book details 
    cout << "\n*** Book Details ***" << endl;
    cout << "Title : " << b.title << endl;
    cout << "Name of Author : " << b.author << endl;
    cout << "Number of Pages : " << b.no_of_pages << endl;
    cout << "Price of Book : " << b.price<<endl;

    Shirt s;

    cout << "Enter color of Shirt\n";
    cin.getline(s.color, 100);
    cout << "Enter size of Shirt\n";
    cin.getline(s.size, 100);
    cout << "Enter design of Shirt\n";
    cin.getline(s.design, 50);
    cout << "Enter Price of Shirt\n";
    cin >> s.price;

    //Printing shirt details
    cout << "\n*** Shirt Details ***" << endl;
    cout << "Color : " << s.color << endl;
    cout << "Size : " << s.size << endl;
    cout << "Design : " << s.design << endl;
    cout << "Price of Shirt : " << s.price;
    struct Book;
    union Shirt;
    cout << "size of structure : " << sizeof(b) << endl;
    cout << "size of union : " << sizeof(s) << endl;

    return 0;
}