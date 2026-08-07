#include <iostream>
using namespace std;
class Time{
    int h1,m1,h2,m2,hr,min; //data members
public:
     void input() //input the data
     {
        cout<<"Enter first time in Hour Minute: ";
        cin>>h1>>m1;
        cout<<"Enter second time in Hour Minute: ";
        cin>>h2>>m2;
     }
    void add() //add the time and convert greater than 60 mins to hour
     {
        hr=h1+h2;
        min=m1+m2;
        if(min>60)
        {
        hr+=min/60;
        min%=60;}
     }
     void display() //display
     {
        cout<<"Total TIME "<<hr<<" Hour"<<min<<" Minutes"<<endl;
     }
};
int main() //main
{
    Time t;
    t.input();
    t.add();
    t.display();
    return 0;
}
