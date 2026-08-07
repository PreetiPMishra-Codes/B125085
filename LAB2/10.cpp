#include <iostream>
using namespace std;
class WaterBill{ //class
    int conno; //data members
    string conname;
    float co,bill;
public:
     void input() //input taking
     {
        cout<<"Enter consumer number: ";
        cin>>conno;
        cout<<"Enter consumer name: ";
        cin>>conname;
        cout<<"Enter water consumption: ";
        cin>>co;
     }
     void calc() //calculating the details
     {
        if(co<=500) //condition check
        bill=co*2;
        else if(co<=1000)
        bill=(500*2)+((co-500)*3);
        else
        bill=(500*2)+(500*3)+((co-1000)*5);
     }
     void display() //display the details
     {
        cout<<"\nWater Details\n";
        cout<<"Consumer Name "<<conname<<endl;
        cout<<"Consumer number "<<conno<<endl;
        cout<<"Consumption "<<co<<endl;
        cout<<"Total bill "<<bill<<endl;
     }
};
int main() //main
{
    WaterBill w;
    w.input();
    w.calc();
    w.display();
    return 0;
}
