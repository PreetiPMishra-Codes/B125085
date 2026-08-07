#include <iostream>
using namespace std;
class HotelRoom{
    int roomno,days;//data members
    string guestname;
    float cost,totalrent;
public:
     void input()//inputtng the data
     {
        cout<<"Enter room number: ";
        cin>>roomno;
        cin.ignore();
        cout<<"Enter guest name: ";
        cin>>guestname;
        cout<<"Enter days: ";
        cin>>days;
        cout<<"Enter cost per day: ";
        cin>>cost;
     }
     void calc()//member func to calc total rent
     {
        totalrent=days*cost;
     }
     void display() //display the details
     {
        cout<<"\nBooking Details\n";
        cout<<"Room Number "<<roomno<<endl;
        cout<<"Guest Name "<<guestname<<endl;
        cout<<"Days stay "<<days<<endl;
        cout<<"Total cost "<<totalrent<<endl;
     }
};
int main()//main func
{
    HotelRoom h;
    h.input();
    h.calc();
    h.display();
    return 0;
}
