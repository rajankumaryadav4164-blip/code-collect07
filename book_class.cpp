#include <iostream>
#include <string>

using namespace std;

class book {
private:
    string title;
    string author;
    float price;

public:
//Default Constructor
    book() {
    title = "unknown";
    author = "unknown";
    price = 0.0f;
    }
   //Parameterized Constructor
    book(string title, string author ,float price) {
        this-> title= title;
        this->author = author;
        this->price = price;
    }
    void display() {
        cout << "Title: " << this->title << endl;
        cout << "Author: " << this->author << endl;
        cout << "Price: " << this->price << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    book b1;
    book b2("The moon", "John Doe", 106.67f   );
    cout << "Details of Book 1 (default):" << endl;
    b1.display();

    cout << "Details of Book 2 (parameterized):" << endl;
    b2.display();
  
    return 0;
}