#include <iostream>
using namespace std;

class UserAccount {
private:
    string username;
    int loginAttempts;
    string accountStatus;

public:
    void input() {
        cout << "Enter username: ";
        cin >> username;

        cout << "Enter number of unsuccessful login attempts: ";
        cin >> loginAttempts;

        cout << "Enter account status: ";
        cin >> accountStatus;
    }

    friend void checkAccount(UserAccount u);
};

void checkAccount(UserAccount u) {
    cout << "\n----- Account Details -----" << endl;
    cout << "Username: " << u.username << endl;
    cout << "Login Attempts: " << u.loginAttempts << endl;
    cout << "Account Status: " << u.accountStatus << endl;

    if (u.loginAttempts >= 3)
        cout << "Result: Account Locked" << endl;
    else
        cout << "Result: Account Active" << endl;
}

int main() {
    UserAccount user;

    user.input();
    checkAccount(user);

    return 0;
}
