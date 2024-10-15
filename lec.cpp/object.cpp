#include <iostream>
using namespace std;
class person{
    public:
    int per_id;
    string per_name;
    public:
    void get_data(){
        cout<<"Enter ID: ";
        cin>>per_id;
        cout<<"Enter Name: ";
        cin.ignore();
        getline(cin,per_name);
    }
    void display(){
        cout<<"Person Id= "<<per_id<<endl<<"Name= "<<per_name<<endl;
    }
};

int main() {
    person p, p2;

    p.get_data();
    p.display();
    p2.get_data();
    p2.display();
}