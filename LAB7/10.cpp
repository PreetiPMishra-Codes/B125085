#include <iostream>
using namespace std;

class Scholarship {
public:
    virtual void calculateAward(double m,double income) {}
};

class MeritScholarship : public Scholarship {
public:
    void calculateAward(double m,double income) override {
        cout<<"Merit Award: Rs."
            <<(m>=90?20000:m>=80?10000:0)<<endl;
    }
};

class NeedBasedScholarship : public Scholarship {
public:
    void calculateAward(double m,double income) override {
        cout<<"Need-Based Award: Rs."
            <<(income<200000 && m>=70?25000:0)<<endl;
    }
};

int main() {
    double m,income;
    int ch;
    MeritScholarship a;
    NeedBasedScholarship b;
    Scholarship *p;

    cout<<"1.Merit  2.Need-Based\nEnter choice: ";
    cin>>ch;
    cout<<"Enter marks and family income: ";
    cin>>m>>income;

    if(ch==1) p=&a;
    else if(ch==2) p=&b;
    else { cout<<"Invalid choice"; return 0; }

    p->calculateAward(m,income);
}
