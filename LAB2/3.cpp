#include <iostream>
using namespace std;
class Temperature{
    float celcius; //data members
public:
     void input() //member func to input data
     {
        cout<<"Enter temperature in celcius: ";
        cin>>celcius;
     }
    float converter()//to convert from celcius to fareinheit
     {
        return ((9.0/5.0)*celcius) + 32;
     }
     void display()//display
     {
        cout<<"\nTemperature details\n";
        cout<<"in celcius: "<<celcius<<endl;
        cout<<"in farenheit "<<converter()<<endl;
     }
};
int main()//main func
{
    Temperature t;
    t.input();
    t.converter();
    t.display();
    return 0;
}
