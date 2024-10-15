#include <iostream>
using namespace std;
int main() {
    float  circle, rectangle, triangle;
    int length, breath, radius, base , height, area;

    circle = 3.14 * radius * radius;
    triangle = 0.5 * base * height;
    rectangle = length * breath;

    cout<<"Enter your choice: ";
    cin>>area;

    switch(area){
    case 1: 
    cout<<"enter the radius: ";
    cin>>radius;
    cout<<"Area of circle is "<<3.14 * radius * radius;
    break;

    case 2:
    cout<<"Enter base: ";
    cin>>base;
    cout<<"enter height: ";
    cin>>height;
    cout<<"Area of triangle is "<<0.5 * base * height;
    break;

    case 3:
    cout<<"enter the Length: ";
    cin>>length;
    cout<<"enter the breath: ";
    cin>>breath;
    cout<<"Area of rectangle is "<<length * breath;
    break;

    }
    


    

}

