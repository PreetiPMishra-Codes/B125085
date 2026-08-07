#include <iostream>
using namespace std;
class MovieTicket{
    int tickets; //data members
    string moviename;
    float cost,total;
public:
     void input() //input the data
     {
        cout<<"Enter movie name: ";
        cin>>moviename;
        cout<<"Enter number of tickets: ";
        cin>>tickets;
        cout<<"Enter ticket price: ";
        cin>>cost;
     }
     void calc() //calc the total tickets' amount
     {
        total=tickets*cost;
     }
     void display() //display the booking details
     {
        cout<<"\nBooking Details\n";
        cout<<"Movie Name "<<moviename<<endl;
        cout<<"Tickets "<<tickets<<endl;
        cout<<"Total cost "<<total<<endl;
     }
};
int main() //main
{
    MovieTicket m;
    m.input();
    m.calc();
    m.display();
    return 0;
}
