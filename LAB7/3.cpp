#include <iostream>
using namespace std;

class Candidate {
protected:
    int id,attendance;
public:
    Candidate(int i,int a) : id(i),attendance(a) {}
};

class RegularCandidate : public Candidate {
public:
    using Candidate::Candidate;
    void check() {
        cout<<"Regular: "<<(attendance>=75?"Eligible":"Not Eligible")<<endl;
    }
};

class ReappearCandidate : public Candidate {
public:
    using Candidate::Candidate;
    void check() {
        cout<<"Reappear: "<<(attendance>=60?"Eligible":"Not Eligible");
    }
};

int main() {
    int id,a;
    cout<<"Enter regular candidate ID and attendance: ";
    cin>>id>>a;
    RegularCandidate r(id,a);
    r.check();

    cout<<"\nEnter reappear candidate ID and attendance: ";
    cin>>id>>a;
    ReappearCandidate p(id,a);
    p.check();
}
