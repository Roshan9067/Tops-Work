// wap for single inheritance class "vehicle" and derived class "Car" the base class has 
// data members color, maxspeed, and derives class have the member number doors.

#include <iostream>
using namespace std;

class vehicle{
    private:
    int maxspeed;
    string color;
   public:
    void get_data(){
        cout<<"Enter the Max speed of the car: ";
        cin>>maxspeed;
        cout<<"Enter the colour of the car: ";
        cin.ignore();
        getline(cin, color);

    }
    void display(){
        cout<<"Car Maxspeed= "<<maxspeed<<endl<<"Car colour: "<<color<<endl;
    }

};
class car:public vehicle{
    public:
    int doors;
    public:
    void getdoor(){
        get_data();
        cout<<"Enter the numbers of door in thye car: ";
        cin>>doors;

    }
    void show(){
        display();
        cout<<"Number of doors"<<doors;
    }

};
int main(){
    car c;
    c.getdoor();
    c.show ();
}