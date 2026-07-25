#include <iostream>
#include <string>
using namespace std;

class Teacher{
    //properties/attributes
    string name;
    string dept;
    string subject;
    double salary;
    
    //methods/member functions
    void changeDept(string newDept){
        dept=newDept;
    }
};

int main() {
    Teacher t1; //object
    return 0;
}