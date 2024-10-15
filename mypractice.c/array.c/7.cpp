// 7. call by value with using function
#include<iostream>
using namespace std;
int swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"After swapping x and y"<<endl;
    cout<<"X="<<x<<"Y="<<y<<endl;
}
int main(){
    int x,y;
    cout<<"Enter x and y:";
    cin>>x>>y;
    cout<<"Before calling function:"<<"\n x="<<x<<"y="<<y<<endl;
    swap(x,y);
    cout<<"After calling function"<<"\n X="<<x<<"Y="<<y<<endl;
}