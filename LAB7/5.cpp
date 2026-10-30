#include <iostream>
using namespace std;

class Sensor {
protected:
    int id;
public:
    Sensor(int i) : id(i) {}
};

class Temperature : virtual public Sensor {
protected:
    float temp;
public:
    Temperature(int i,float t) : Sensor(i),temp(t) {}
};

class Humidity : virtual public Sensor {
protected:
    float humidity;
public:
    Humidity(int i,float h) : Sensor(i),humidity(h) {}
};

class FarmMonitor : public Temperature, public Humidity {
public:
    FarmMonitor(int i,float t,float h)
        : Sensor(i),Temperature(i,t),Humidity(i,h) {}

    void display() {
        cout<<"Sensor ID: "<<id<<"\nTemperature: "<<temp
            <<"\nHumidity: "<<humidity<<endl;
        cout<<(temp>35 || humidity>80?"Warning!":"Normal");
    }
};

int main() {
    int id;
    float t,h;
    cout<<"Enter sensor ID, temperature and humidity: ";
    cin>>id>>t>>h;
    FarmMonitor f(id,t,h);
    f.display();
}
