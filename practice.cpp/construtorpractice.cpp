//2. WAP in c++ to read and display employee details using nested class.

#include <iostream>
using namespace std;

class employee{
    private:
    string name;
    string department;
    int id;
    float salary;

    public:
    class Address{
        private:
        string city;
        string state;
        int pincode;

        public:
        void get_address(){
            cout<<"Enter Your City name: ";
            cin >>city;
            cout<<"Enter your state name: ";
            cin>>state;
            cout<<"Enter your city pincode: ";
            cin>>pincode;
        }

        void display_address(){
            cout<<"city: "<<city<<endl;
            cout<<"state: "<<state<<endl;
            cout<<"pincode: "<<pincode<<endl;
        }
    };


    public:
    void get_data(){
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your department name: ";
        cin>>department;
        cout<<"Enter your Employee id: ";
        cin>>id;
        cout<<"Enter your monthly salary: ";
        cin>>salary;


    }

    void displaydetais(){
        cout<<"\n\nEmployee Details:";
        cout<<"name: "<<name<<endl;
        cout<<"Department: "<<department<<endl;
        cout<<"Employee ID: "<<id<<endl;
        cout<<"Monthly Salary: "<<salary<<endl;

    }

};

int main(){
    employee emp;
    emp.get_data();
  employee :: Address add;
    add.get_address();
    emp.displaydetais();
    add.display_address();
}


