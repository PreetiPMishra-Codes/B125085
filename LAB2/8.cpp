#include <iostream>
using namespace std;
class HostelFee{
    int id,months; //data members
    string stname;
    float fee,total;
    char delay;
public:
     void input() //member func to input the details
     {
        cout<<"Enter student name: ";
        cin>>stname;
        cout<<"Enter Hostel ID: ";
        cin>>id;
        cout<<"Enter monthly fee: ";
        cin>>fee;
        cout<<"Enter number of months: ";
        cin>>months;
        cout<<"Payment delayed?(y/n): ";
        cin>>delay;
     }
     void calc() //to calculate the total fees with delay fine
     {
        total=months*fee;
        if(delay=='y')
        total+=500;
     }
     void display() //display
     {
        cout<<"\nHostel FEE Details\n";
        cout<<"Student Name "<<stname<<endl;
        cout<<"Hostel ID "<<id<<endl;
        cout<<"Total amount "<<total<<endl;
     }
};
int main() //main
{
    HostelFee h;
    h.input();
    h.calc();
    h.display();
    return 0;
}
