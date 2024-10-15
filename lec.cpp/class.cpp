#include <iostream>
using namespace std;
class employee{
    public:
    int emp_no;
    string emp_name;
};
int main(){
    employee emp;
    emp.emp_no = 21;
    emp.emp_name = "rakesh";
    cout<<"Employee Number = "<<emp.emp_no<<endl;
    cout<<"Employee Name = "<<emp.emp_name;
}