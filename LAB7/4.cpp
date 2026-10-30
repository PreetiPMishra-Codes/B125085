#include <iostream>
using namespace std;

class LibraryAccess {
protected:
    int books;
public:
    LibraryAccess(int b) : books(b) {}
};

class LaboratoryAccess {
protected:
    int pending;
public:
    LaboratoryAccess(int p) : pending(p) {}
};

class StudentAccess : public LibraryAccess, public LaboratoryAccess {
public:
    StudentAccess(int b,int p) : LibraryAccess(b),LaboratoryAccess(p) {}
    void display() {
        cout<<(books<=5 && pending==0?"Full Access":"Access Denied");
    }
};

int main() {
    int b,p;
    cout<<"Enter borrowed books and pending submissions: ";
    cin>>b>>p;
    StudentAccess s(b,p);
    s.display();
}
