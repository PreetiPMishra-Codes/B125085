#include <iostream>
using namespace std;
class Square{
    float side; //data members
public:
     void input() //member funcs to take details as input
     {
        cout<<"Enter side length ";
        cin>>side;
     }
    float area()//calculate area
     {
        return side*side;
     }
     float perimeter() // calculate perimeter
     {
        return 4*side;
     }
     void display() //member func to display the details
     {
        cout<<"\nSquare details\n";
        cout<<"area "<<area()<<endl;
        cout<<"perimeter "<<perimeter()<<endl;
     }
};
int main() //main func
{
    Square s;
    s.input();
    s.display();
    return 0;
}
