#include <iostream>
#define pi 3.14
using namespace std;
class circle{
    public:
    int Radius, Area;
    public:
    void get_radius();
    void get_area();
    void display();
};

void circle :: get_radius(){
    cout<<"Enter Radius: ";
    cin>>Radius;
}
void circle :: get_area(){
    Area = pi * Radius * Radius;
    
} 
void circle :: display(){
     cout<<"Area of circle is: "<< Area <<endl;

}

int main() {
    circle c;
    c.get_radius();
    c.get_area();
    c.display();

}