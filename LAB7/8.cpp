#include <iostream>
#include <algorithm>
using namespace std;

class TrafficSignal {
public:
    virtual void getGreenDuration(int n) {}
};

class UrbanSignal : public TrafficSignal {
public:
    void getGreenDuration(int n) override {
        cout<<"Urban: "<<min(60,10+2*n)<<" seconds";
    }
};

class HighwaySignal : public TrafficSignal {
public:
    void getGreenDuration(int n) override {
        cout<<"Highway: "<<min(90,15+3*n)<<" seconds";
    }
};

int main() {
    int n,ch;
    UrbanSignal u;
    HighwaySignal h;
    TrafficSignal *p;

    cout<<"1.Urban  2.Highway\nEnter choice and vehicle count: ";
    cin>>ch>>n;

    if(ch==1) p=&u;
    else if(ch==2) p=&h;
    else { cout<<"Invalid choice"; return 0; }

    p->getGreenDuration(n);
}
