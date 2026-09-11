#include <iostream>
using namespace std;

class QueueDisplay {
    int size;
    int *id;

public:
    QueueDisplay() {
        cout << "Enter queue size: ";
        cin >> size;

        id = new int[size];

        cout << "Enter customer IDs:\n";
        for (int i = 0; i < size; i++) {
            cout << "Customer " << i + 1 << ": ";
            cin >> id[i];
        }
    }

    void display() {
        for (int i = 0; i < size; i++)
            cout << id[i] << " ";
        cout << endl;
    }

    friend void exchange(QueueDisplay&, QueueDisplay&);

    ~QueueDisplay() {
        delete[] id;
    }
};

void exchange(QueueDisplay &a, QueueDisplay &b) {
    swap(a.size, b.size);
    swap(a.id, b.id);
}

int main() {
    cout << "Enter details of Queue 1:\n";
    QueueDisplay *q1 = new QueueDisplay;

    cout << "\nEnter details of Queue 2:\n";
    QueueDisplay *q2 = new QueueDisplay;

    cout << "\nBefore Exchange:\n";
    cout << "Queue 1: ";
    q1->display();
    cout << "Queue 2: ";
    q2->display();

    exchange(*q1, *q2);

    cout << "\nAfter Exchange:\n";
    cout << "Queue 1: ";
    q1->display();
    cout << "Queue 2: ";
    q2->display();

    delete q1;
    delete q2;
}
