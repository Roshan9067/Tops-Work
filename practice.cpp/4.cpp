// Wap in c++ condtructor or distructor to print odd or even numbers.

#include <iostream>
using namespace std;

class number{
    int n;
    public:

    number(int num){
        n = num;
        cout<<"Even numbers: ";
        for(int i = 1; i <= n; i++){
            if(i % 2 == 0){
                cout<<i<<" ";
            }
            cout<< endl;
        }
    }

    ~number(){
        cout<<"Odd numbers: ";
        for(int i = 1; i <= n; i++){
            if(i % 2 != 0){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
};

int main(){
    int num;
    cout<<"Enter the number which you find even an odd number: ";
    cin>>num;

    number obj(num);
}