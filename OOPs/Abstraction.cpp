#include <iostream>
#include <string>
using namespace std;

class shape{//abstract class automatically because of pure virtual function
    virtual void draw()=0; //pure virtual function

};
class Circle:public shape{
    public:
    void draw(){
        cout<<"drawing a circle";
    }
};

int main() {
    Circle c1;
    c1.draw();
    return 0;
}