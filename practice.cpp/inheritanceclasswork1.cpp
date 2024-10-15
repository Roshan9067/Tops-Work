//1. wap to read and print employee information using multiple inheritance.
#include <iostream>
using namespace std;

class empname{
    public:
    int show(){
        cout<<"Employee name is : shatish"<<endl;;
    }
};

class empid{
    public:
    int show(){
        cout<<"Employee Id is: 123466789"<<endl;;
    }
};

class empdepartment{
    public:
    int show(){
    cout<<"Employee Department name: Production"<<endl;
    }
};

class empsalary :public empname,empid,empdepartment{
    public:
    int show(){
        empname::show();
        empid::show();
        empdepartment::show();
        cout<<"Employee salary is: 55300.00"<<endl;
    }
};

int main(){
    empsalary emp;
    emp.show();
}

 
