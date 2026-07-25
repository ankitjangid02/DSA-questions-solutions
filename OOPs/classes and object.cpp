#include <iostream>
#include <string>
using namespace std;

class Teacher{
private:
    double salary;
public:
    //properties/attributes
    string name;
    string dept;
    string subject;
    
    //methods/member functions
    void changeDept(string newDept){
        dept=newDept;
    }
};

int main() {
    Teacher t1; //object
    t1.name="Shradha";
    t1.subject="C++";
    t1.dept="Computer Science";
    // t1.salary=25000;
    
    cout<<t1.name;
    return 0;
}