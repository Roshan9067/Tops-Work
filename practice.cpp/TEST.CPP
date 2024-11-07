//1.DEFINE A abstact shape class with pure vertual function area and parameter and derived class circle ,rectangle triangle.

#include<iostream>
using namespace std;
class shape{
    private:
      


};


class circle:public shape{
    public:
    float radius,pi = 3.14,area;
    void setcir(){
    cout<<"Enter The Radius: ";
    cin>>radius;
    }
    void getcir(){
        area =  pi *radius *radius;
    }

};
class rectangle:public circle{
    public:
    float length, width,area;
    void setrec(){
        cout<<"Enter length and width: ";
        cin>>length>>width;
    }
    void getcir(){
        area = length*width;
    }

};

class triangle:public rectangle{
    public:
    float 

};

int main(){
    triangle tr;
    


}



