#include <iostream>
using namespace std;
class CricketPlayer{
    int matches,runs; //data members
    string pname;
    float bavg;
public:
     void input() //input the data
     {
        cout<<"Enter player name: ";
        cin>>pname;
        cout<<"Enter matches played: ";
        cin>>matches;
        cout<<"Enter runs scored: ";
        cin>>runs;
     }
     void battingavg() //calculate the batting average
     {
        bavg=runs/matches;
     }
     void display() //display the result
     {
        cout<<"\nPerformance\n"; //conditions checking
        if(bavg>=50)
        cout<<"Excellent";
        else if(bavg>=35)
        cout<<"Good";
        else if(bavg>=20)
        cout<<"Average";
        else
        cout<<"Poor";

        cout<<endl;
     }
};
int main() //main
{
    CricketPlayer c;
    c.input();
    c.battingavg();
    c.display();
    return 0;
}
