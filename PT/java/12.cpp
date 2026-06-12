// #include <iostream>
// using namespace std;
//
// class A{
//     public:
//     void msg(){
//         cout<<"Hello World";
//     }
// };
//
// class B: public A{
//     public:
//     void msg(){
//         cout<<"Hello Student";
//     }
// };
//
// int main()
// {
//     B obj;
//     obj.msg();
//     return 0;
// }
//
//Hello Student




// Pointer variable always pointing same type of data. And store the reference


// #include <iostream>
// using namespace std;
//
// class A{
//     public:
//     void msg(){
//         cout<<"Hello World";
//     }
// };
//
// class B: public A{
//     public:
//     void msg(){
//         cout<<"Hello Student";
//     }
// };
//
// int main()
// {
//     A *ref=new B();  parent
//     ref->msg();
//     return 0;
// }
//
//Hello World


// #include <iostream>
// using namespace std;
//
// class A{
//     public:
//     virtual void msg(){      //Virtual keyword   //This process is called late binding.
//         cout<<"Hello World";
//     }
// };
//
// class B: public A{
//     public:
//     void msg(){
//         cout<<"Hello Student";
//     }
// };
//
// int main()
// {
//     A *ref=new B();
//     ref->msg();
//     return 0;
// }
//
//Hello Student



//Do Nothing Method
// class A{
//     void fun()=0;   //do nothing
//     //c++ says don't call this method
//     //for this c++ rule.. you can't create the object of that class contain do nothing method
//     void msg(){
//         cout<<"Do Study";
//     }
// }; 
//Generally you can use class data 2 ways
//1.using object
//2.using inheritance


// #include <iostream>
// using namespace std;
//
// class A{
//     public:
//         void fun()=0;   //do nothing method
//         void msg(){
//             cout<<"Do Study";
//         }
// };
//
// class B:public A
// {
//  
// };
//
// int main(){
//     B *p=new B();
//     p->msg();
// }
// Error


// Solution
// #include <iostream>
// using namespace std;

// class A{
//     public:
//         virtual void fun()=0;   //do nothing method  //pure virtual function
//         void msg(){
//             cout<<"Do Study";
//         }
// };

// class B:public A
// {
//     void fun() override{
//         cout<<"Hello";
//     }  
// };

// int main(){
//     B *p=new B();
//     p->msg();
// }


#include <bits/stdc++.h>
using namespace std;
class Boss{
    public:
    virtual void t1()=0;
    void salary(){
        cout<<"You take salary";
    }
};
class Employee:public Boss
{
    public:
    void t1(){
        cout<<"Task complete";
    }
};
int main() {
    Employee el;
    el.t1();

    return 0;
}