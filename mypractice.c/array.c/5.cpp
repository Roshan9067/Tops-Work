
// palindrome number.
#include <iostream>
using namespace std;

int main() { 
    int num, originalnum, reversenum = 0, remainder;

    cout<<"Enter Number to cheak palindrome or not: ";
    cin>>num;

    originalnum = num;

    do{
        
        remainder = num % 10;
        reversenum = reversenum * 10 + remainder;
        num /=10;

    }while (num > 0);
    if(originalnum = reversenum) {
        cout<<originalnum<<" is palindrome number."<<endl;
    }else{
        cout<<originalnum<<" is not a palindrome number.";
    }


}