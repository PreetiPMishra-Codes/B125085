#include <iostream>
using namespace std;

class MuseumManager;

class Exhibit {
private:
    string exhibitName;
    string exhibitID;
    int visitorCount;
    bool displayStatus;

public:
    void input() {
        cout << "Enter exhibit name: ";
        cin >> exhibitName;

        cout << "Enter exhibit ID: ";
        cin >> exhibitID;

        cout << "Enter visitor count: ";
        cin >> visitorCount;

        cout << "Enter display status (1 = Open, 0 = Closed): ";
        cin >> displayStatus;
    }

    friend class MuseumManager;
};

class MuseumManager {
public:

    void displayInfo(Exhibit &e) {
        cout << "\n----- Exhibit Information -----" << endl;

        cout << "Exhibit Name: "
             << e.exhibitName << endl;

        cout << "Exhibit ID: "
             << e.exhibitID << endl;

        cout << "Visitor Count: "
             << e.visitorCount << endl;

        cout << "Display Status: "
             << (e.displayStatus ? "Open" : "Closed")
             << endl;
    }

    void addVisitors(Exhibit &e, int visitors) {
        if (visitors > 0) {
            e.visitorCount += visitors;
            cout << "Visitors added successfully." << endl;
        }
        else {
            cout << "Invalid number of visitors." << endl;
        }
    }

    void resetVisitorCount(Exhibit &e) {
        e.visitorCount = 0;
        cout << "Visitor count reset." << endl;
    }

    void openExhibit(Exhibit &e) {
        e.displayStatus = true;
        cout << "Exhibit opened." << endl;
    }

    void closeExhibit(Exhibit &e) {
        e.displayStatus = false;
        cout << "Exhibit closed." << endl;
    }

    void checkStatus(Exhibit &e) {
        cout << "Exhibit is currently "
             << (e.displayStatus ? "OPEN" : "CLOSED")
             << endl;
    }
};

int main() {

    Exhibit exhibit;
    MuseumManager manager;

    exhibit.input();

    int choice;

    do {
        cout << "\n===== Museum Manager =====" << endl;
        cout << "1. Display Exhibit Information" << endl;
        cout << "2. Add Visitors" << endl;
        cout << "3. Reset Visitor Count" << endl;
        cout << "4. Open Exhibit" << endl;
        cout << "5. Close Exhibit" << endl;
        cout << "6. Check Exhibit Status" << endl;
        cout << "7. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            manager.displayInfo(exhibit);
            break;

        case 2: {
            int visitors;
            cout << "Enter number of visitors to add: ";
            cin >> visitors;
            manager.addVisitors(exhibit, visitors);
            break;
        }

        case 3:
            manager.resetVisitorCount(exhibit);
            break;

        case 4:
            manager.openExhibit(exhibit);
            break;

        case 5:
            manager.closeExhibit(exhibit);
            break;

        case 6:
            manager.checkStatus(exhibit);
            break;

        case 7:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice." << endl;
        }

    } while (choice != 7);

    return 0;
}
