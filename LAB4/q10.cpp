#include <iostream>
using namespace std;

class AttendanceManager;

class Classroom {
private:
    string className;
    int totalStudents;
    int presentStudents;
    bool attendanceStatus;

public:
    void input() {
        cout << "Enter class name: ";
        cin >> className;

        cout << "Enter total number of students: ";
        cin >> totalStudents;

        cout << "Enter number of present students: ";
        cin >> presentStudents;

        cout << "Enter attendance status (1 = Completed, 0 = Not Completed): ";
        cin >> attendanceStatus;
    }

    friend class AttendanceManager;
};

class AttendanceManager {
public:

    void displayInfo(Classroom &c) {
        cout << "\n----- Classroom Information -----" << endl;

        cout << "Class Name: "
             << c.className << endl;

        cout << "Total Students: "
             << c.totalStudents << endl;

        cout << "Present Students: "
             << c.presentStudents << endl;

        cout << "Attendance Status: "
             << (c.attendanceStatus ? "Completed" : "Not Completed")
             << endl;
    }

    void updatePresentStudents(Classroom &c) {
        int present;

        cout << "Enter number of present students: ";
        cin >> present;

        if (present >= 0 && present <= c.totalStudents) {
            c.presentStudents = present;
            cout << "Present student count updated." << endl;
        }
        else {
            cout << "Invalid number of students." << endl;
        }
    }

    void markAttendanceCompleted(Classroom &c) {
        c.attendanceStatus = true;
        cout << "Attendance marked as completed." << endl;
    }

    void displayAttendanceStatus(Classroom &c) {
        cout << "Attendance Status: "
             << (c.attendanceStatus ? "Completed" : "Not Completed")
             << endl;
    }

    void displayAbsentStudents(Classroom &c) {
        int absentStudents =
            c.totalStudents - c.presentStudents;

        cout << "Absent Students: "
             << absentStudents << endl;
    }
};

int main() {

    Classroom classroom;
    AttendanceManager manager;

    classroom.input();

    int choice;

    do {
        cout << "\n===== Attendance Manager =====" << endl;
        cout << "1. Display Classroom Information" << endl;
        cout << "2. Update Present Students" << endl;
        cout << "3. Mark Attendance as Completed" << endl;
        cout << "4. Display Attendance Status" << endl;
        cout << "5. Display Absent Students" << endl;
        cout << "6. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            manager.displayInfo(classroom);
            break;

        case 2:
            manager.updatePresentStudents(classroom);
            break;

        case 3:
            manager.markAttendanceCompleted(classroom);
            break;

        case 4:
            manager.displayAttendanceStatus(classroom);
            break;

        case 5:
            manager.displayAbsentStudents(classroom);
            break;

        case 6:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice." << endl;
        }

    } while (choice != 6);

    return 0;
}
