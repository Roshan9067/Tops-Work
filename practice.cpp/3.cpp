//Wap to print fibonachi series using parameterized construture.

#include <iostream>
using namespace std;

class fibonacci{
    int n1 = 0, n2 = 1, next;
    public:
    
    fibonacci(int terms){
        cout<<n1;
        if(terms > 1){
            cout<<" "<<n2;
            for(int i = 3; i <= terms; i++){
                next = n1 + n2;
                cout<<" "<<next;
                n1=n2;
                n2=next;
            }
        }

    }
};
int main(){
    int num;
    cout<<"Enter the number of terms: ";
    cin>>num;
    fibonacci fib(num);

}
