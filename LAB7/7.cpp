#include <iostream>
using namespace std;

class ElectricityPlan {
public:
    virtual void calculateBill(double u) {}
};

class ResidentialPlan : public ElectricityPlan {
public:
    void calculateBill(double u) override {
        cout<<"Residential Bill: Rs."
            <<(u<=100?u*4:400+(u-100)*6)<<endl;
    }
};

class CommercialPlan : public ElectricityPlan {
public:
    void calculateBill(double u) override {
        cout<<"Commercial Bill: Rs."<<u*7<<endl;
    }
};

int main() {
    double u;
    int ch;
    ResidentialPlan r;
    CommercialPlan c;
    ElectricityPlan *p;

    cout<<"1.Residential  2.Commercial\nEnter choice and units: ";
    cin>>ch>>u;

    if(ch==1) p=&r;
    else if(ch==2) p=&c;
    else { cout<<"Invalid choice"; return 0; }

    p->calculateBill(u);
}
