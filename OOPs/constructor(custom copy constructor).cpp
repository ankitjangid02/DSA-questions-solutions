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
    
    // //non-parameterized
    // Teacher(){
    //     dept="Computer Science";
    // }
    
    //parameterized with this pointer
    Teacher(string name, string dept, string subject, double salary){
        this->name=name;
        this->dept=dept;
        this->subject=subject;
        this->salary=salary;
    }
    
    // custom copy constructor
    Teacher(Teacher &orgObj){ //pass by reference
        cout<<"I am custom copy constructor\n";
        this->name=orgObj.name;
        this->dept=orgObj.dept;
        this->subject=orgObj.subject;
        this->salary=orgObj.salary;
    }
    
    //methods/member functions
    void changeDept(string newDept){
        dept=newDept;
    }
    
    void getInfo(){
        cout<<"name:"<<name<<endl;
        cout<<"subject:"<<subject<<endl;
    }
};

int main() {
    Teacher t1("Shradha", "Computer Science", "C++", 25000); //constructor call
    // t1.getInfo();

    Teacher t2(t1); // default copy constructor called here
    t2.getInfo();
    return 0;
}