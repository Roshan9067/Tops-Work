// WAP in c++ using constructor to multiply three numbers.

#include <iostream>
using namespace std;
class multiply{
    int num1, num2, num3, result;

    public:
    multiply(int x, int y, int z){
        num1=x;
        num2=y;
        num3=z;
        result = num1 * num2 * num3;

    

    }
    void show(){
        cout<<"The multiplication of: "<<num1<<" * "<<num2<<" * "<<num3<<" is: "<<result<<endl;
    }
};

int main(){
    int x, y, z;
    cout<<"Enter Any Three Numbers: ";
    cin>>x>>y>>z;
    multiply multi(x,y,z);
    multi.show();

}