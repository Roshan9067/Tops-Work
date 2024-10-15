#include <iostream>
using namespace std;

int main() {
    int num, next, first = 0, second = 1;

    cout<<"Enter Term which you Want fibonachi series: ";
    cin>>num;

    cout<<first;
    if(num > 1){
        cout<<second;
        for(int i = 3;i <= num; i++){
            next = first + second;
            cout<<next; 
            first = second;
            second = next;
        }
        
    }

} 