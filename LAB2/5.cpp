#include <iostream>
using namespace std;
class MobileRecharge{
    long long mobileno; //data members
    string custname;
    float balance;
public:
     void input() //input the data
     {
        cout<<"Enter mobile number: ";
        cin>>mobileno;
        cin.ignore();
        cout<<"Enter customer name: ";
        cin>>custname;
        cout<<"Enter current balance: ";
        cin>>balance;
     }
     void recharge() //calculate recharge amt
     {
        float amt;
        cout<<"Enter recharge amount: "<<endl;
        cin>>amt;
        balance+=amt;
     }
     void deduct() //adjust the deduction
     {
        float plan;
        cout<<"Enter recharge plan cost: "<<endl;
        cin>>plan;
        if(plan<=balance)
        balance-=plan;
        else
        cout<<"Insufficient Balance\n";
     }
     void display() //display the details
     {
        cout<<"Customer Name "<<custname<<endl;
        cout<<"Mobile Number "<<mobileno<<endl;
        cout<<"Balance "<<balance<<endl;
     }
};
int main()//main
{
    MobileRecharge r;
    r.input();
    r.recharge();
    r.deduct();
    r.display();
    return 0;
}
