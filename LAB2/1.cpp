#include <iostream>
using namespace std;
class Car{
    int carnum,modelyr;// data members
    string brandname;
public:
     void input()//member func to take the details as input
     {
        cout<<"Enter car number: ";
        cin>>carnum;
        cin.ignore();
        cout<<"Enter brand name: ";
        cin>>brandname;
        cout<<"Enter model yr: ";
        cin>>modelyr;
     }
     void display() //member fuc to display the details
     {
        cout<<"\nCar Details\n";
        cout<<"Car Number "<<carnum<<endl;
        cout<<"Brand Name "<<brandname<<endl;
        cout<<"Model year "<<modelyr<<endl;
     }
};
int main()//main func
{
    Car c;
    c.input();
    c.display();
    return 0;
}
