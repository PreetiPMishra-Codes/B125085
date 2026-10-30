#include <iostream>
using namespace std;

class Document {
public:
    virtual void exportFile() {}
};

class PDFDocument : public Document {
public:
    void exportFile() override { cout<<"PDF (.pdf)\n"; }
};

class TextDocument : public Document {
public:
    void exportFile() override { cout<<"Text (.txt)\n"; }
};

class CSVDocument : public Document {
public:
    void exportFile() override { cout<<"CSV (.csv)\n"; }
};

int main() {
    int choice;
    PDFDocument p;
    TextDocument t;
    CSVDocument c;
    Document *d;

    cout<<"1.PDF  2.Text  3.CSV\nEnter choice: ";
    cin>>choice;

    if(choice==1) d=&p;
    else if(choice==2) d=&t;
    else if(choice==3) d=&c;
    else { cout<<"Invalid choice"; return 0; }

    d->exportFile();
}
