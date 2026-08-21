#include <iostream>
using namespace std;

class ServiceManager;

class VehicleService {
private:
    string vehicleNumber;
    string ownerName;
    bool serviceDue;
    int lastServiceKilometres;

public:
    void input() {
        cout << "Enter vehicle number: ";
        cin >> vehicleNumber;

        cout << "Enter owner name: ";
        cin >> ownerName;

        cout << "Is service due? (1 = Yes, 0 = No): ";
        cin >> serviceDue;

        cout << "Enter last service kilometres: ";
        cin >> lastServiceKilometres;
    }

    friend class ServiceManager;
};

class ServiceManager {
public:

    void displayInfo(VehicleService &v) {
        cout << "\n----- Vehicle Service Information -----" << endl;

        cout << "Vehicle Number: "
             << v.vehicleNumber << endl;

        cout << "Owner Name: "
             << v.ownerName << endl;

        cout << "Service Due: "
             << (v.serviceDue ? "Yes" : "No") << endl;

        cout << "Last Service Kilometres: "
             << v.lastServiceKilometres << " km" << endl;
    }

    void markServiceCompleted(VehicleService &v) {
        v.serviceDue = false;
        cout << "Service marked as completed." << endl;
    }

    void updateKilometres(VehicleService &v) {
        int km;

        cout << "Enter new last service kilometres: ";
        cin >> km;

        v.lastServiceKilometres = km;

        cout << "Kilometres updated successfully." << endl;
    }

    void checkService(VehicleService &v) {
        if (v.serviceDue)
            cout << "Vehicle requires servicing." << endl;
        else
            cout << "Vehicle does not require servicing." << endl;
    }
};

int main() {

    VehicleService vehicle;
    ServiceManager manager;

    vehicle.input();

    int choice;

    do {
        cout << "\n===== Service Manager =====" << endl;
        cout << "1. Display Vehicle Information" << endl;
        cout << "2. Mark Service as Completed" << endl;
        cout << "3. Update Last Service Kilometres" << endl;
        cout << "4. Check Service Requirement" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            manager.displayInfo(vehicle);
            break;

        case 2:
            manager.markServiceCompleted(vehicle);
            break;

        case 3:
            manager.updateKilometres(vehicle);
            break;

        case 4:
            manager.checkService(vehicle);
            break;

        case 5:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice." << endl;
        }

    } while (choice != 5);

    return 0;
}
