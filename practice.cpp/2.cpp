/*
2. wap to having class name fruit with data_member to calculate number of fruits in a basket.
create 2 other classes apple and mango to calculate number of apples and mangoes in a basket 
print the number of fruits of each type and total number of fruits in a basket.
*/

#include <iostream>
using namespace std;


class Apple{
    public: 
    int apple;
    int show(){
        cout<<"Enter The Number Apples In a Basket: ";
        cin>>apple;
       
    }


};

class Mango{
    public:
    int mango;
    int show(){
        cout<<"Enter The Number Mangoes In a Basket: ";
        cin>>mango;
        
    }


};

class fruit : public Apple, Mango{
    int Fruit;
    public:
    int show(){
        Apple::show();
        Mango::show();
        Fruit = apple + mango;
        cout<<"The total number of apples are: "<<apple<<endl;
        cout<<"The total number of Mangoes are: "<<mango<<endl;
        cout<<"The Total Numbers of fruits in a basket are: "<<Fruit<<endl;

    }


};

int main(){
    fruit f;
    f.show();
}
