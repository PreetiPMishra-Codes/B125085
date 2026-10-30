#include <iostream>
using namespace std;

class BackupPolicy {
public:
    virtual void calculateStorage(double s) {}
};

class FullBackup : public BackupPolicy {
public:
    void calculateStorage(double s) override {
        cout<<"Full Backup: "<<s<<" MB";
    }
};

class IncrementalBackup : public BackupPolicy {
public:
    void calculateStorage(double s) override {
        cout<<"Incremental Backup: "<<s*0.25+50<<" MB";
    }
};

int main() {
    double s;
    int ch;
    FullBackup f;
    IncrementalBackup i;
    BackupPolicy *p;

    cout<<"1.Full  2.Incremental\nEnter choice and data size: ";
    cin>>ch>>s;

    if(ch==1) p=&f;
    else if(ch==2) p=&i;
    else { cout<<"Invalid choice"; return 0; }

    p->calculateStorage(s);
}
