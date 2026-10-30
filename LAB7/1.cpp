#include <iostream>
using namespace std;

class Ticket {
protected:
    string name;
    int distance;
public:
    Ticket(string n, int d) : name(n), distance(d) {}
};

class RailwayTicket : public Ticket {
    float rate;
public:
    RailwayTicket(string n,int d,float r) : Ticket(n,d),rate(r) {}
    void display() {
        float fare=distance*rate;
        if(distance>300) fare*=0.9;
        cout<<"Passenger: "<<name<<"\nFare: Rs."<<fare;
    }
};

int main() {
    string n;
    int d;
    float r;
    cout<<"Enter name, distance and rate: ";
    cin>>n>>d>>r;
    RailwayTicket t(n,d,r);
    t.display();
}
