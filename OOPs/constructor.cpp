#include <iostream>
#include <string>
using namespace std;

class Teacher{
private:
    double salary;
public:
    Teacher(){
        cout<<"Hi, I am constructor!\n";
    }
    //properties/attributes
    string name;
    string dept;
    string subject;
    
    //methods/member functions
    void changeDept(string newDept){
        dept=newDept;
    }
    
    //setter-set the vslue
    void setSalary(double s){
        salary=s;
    }
    
    //getter-get the value
    double getSalary(){
        return salary;
    }
};

int main() {
    Teacher t1; //constructor call
    t1.name="Shradha";
    t1.subject="C++";
    t1.dept="Computer Science";
    t1.setSalary(25000);
    
    cout<<t1.name<<endl;
    cout<<t1.getSalary();
    return 0;
}