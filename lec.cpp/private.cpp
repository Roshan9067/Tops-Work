#include <iostream>
using namespace std;
class employee{
    private:
    int emp_no;
    
    string emp_name;
    public:
    void empno(){
        emp_no = 21;
    }
    void setname(){
        emp_name = "ramesh";
    }
    void dispaly(){
        cout<<"Employee Number : "<<emp_no<<endl;
        cout<<"Employee Name : "<<emp_name<<endl;
    }
};

int main() {
    employee emp;
    emp.empno();
    emp.setname();
    emp.dispaly();
}
