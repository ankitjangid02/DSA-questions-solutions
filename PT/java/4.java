// class Ex{
//     void add(int x, int y){
//         System.out.println(x+y);
//     }
//     void add(int x, int y, int z){
//         System.out.println(x+y+z);
//     }
//     public static void main(String[] args) {
//         Ex obj=new Ex();
//         obj.add(6,2);
//         obj.add(1,2,3);
//     }
// }


//overloading
// class A1{
//     void add(int x,int y){
//         System.out.println(x+y);
//     }
// }
// class B1 extends A1{
//     void add(int x,int y,int z){
//         System.out.println(x+y+z);
//     }
// }
// class Test111{
//     public static void main(String[] args) {
//         A1 obj=new A1();
//         obj.add(1,2);
//         B1 obj2=new B1();
//         obj2.add(3,4,5);
//         obj2.add(6,7);
//     }
// }


//overriding
// class A1{
//     void msg(){
//         System.out.println("Hello from A class");
//     }
// }
// class B1 extends A1{
//     void msg(){
//         System.out.println("Hello from B class");
//     }
// }
// class Test{
//     public static void main(String[] args) {
//         A1 obj=new A1();
//         obj.msg();
//         B1 obj1=new B1();
//         obj1.msg();
//     }
// }


// parent ref=child object
// only parent method
//
//
// in java this rule not work only for non static & no argument
// (in this case it call child method)
// class A1{
//     void msg(){
//         System.out.println("Hello from A class");
//     }
// }
// class B1 extends A1{
//     void msg(){
//         System.out.println("Hello from B class");
//     }
// }
// class Exa{
//     public static void main(String[] args) {
//         A1 obj=new B1();
//         obj.msg();
//     }
// }


// class A1{
//     void add(int x,int y){
//         System.out.println(x+y);
//     }
// }
// class B1 extends A1{
//     void add(int x,int y,int z){
//         System.out.println(x+y+z);
//     }
// }
// class Exa{
//     public static void main(String[] args) {
//         A1 obj=new B1();
//         obj.add(2,3,4);

//     }
// }


// class A1{
//     static void msg(){
//         System.out.println("Hello from A class");
//     }
// }
// class B1 extends A1{
//     static void msg(){
//         System.out.println("Hello from B class");
//     }
// }
// class Exa{
//     public static void main(String[] args) {
//         A1 obj=new B1();
//         obj.msg();
//     }
// }

//parent ref and child object
//non static(same argument)
// child method called
//
// parent ref and child object
// non-static(different argument)
// parent method called
//
// parent ref and child object
// static(same argument)
// parent method called
// 
// parent ref and child object
// static(different argument)
// parent method called