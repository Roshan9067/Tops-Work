#include <iostream>
using namespace std;

int main() {
    int num , factorial = 1;

    cout<<"Enter the number which you want factorial: ";
    cin>>num;

    for(int i = 1; i <= num; i++){
        factorial *= i;

    }
    cout<<"factorial of "<< num << " is :"<<factorial;
}
