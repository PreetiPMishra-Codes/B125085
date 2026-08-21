#include <iostream>
using namespace std;

class EventParticipant {
private:
    string participantName;
    int age;
    string registrationStatus;

public:
    void input() {
        cout << "Enter participant name: ";
        cin >> participantName;

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter registration status (Active/Inactive): ";
        cin >> registrationStatus;
    }

    friend void verifyParticipant(EventParticipant p);
};

void verifyParticipant(EventParticipant p) {

    cout << "\n----- Event Registration -----" << endl;

    cout << "Participant Name: "
         << p.participantName << endl;

    cout << "Age: " << p.age << endl;

    cout << "Registration Status: "
         << p.registrationStatus << endl;

    if (p.age >= 18 &&
        p.registrationStatus == "Active")
        cout << "Result: Eligible" << endl;
    else
        cout << "Result: Not Eligible" << endl;
}

int main() {

    EventParticipant p;

    p.input();
    verifyParticipant(p);

    return 0;
}
