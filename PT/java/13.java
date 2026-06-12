// Abstract class
// abstract class Ex{

// }
//The abstarct class keyword is used declared abstract class
//you cant  create object of abstract class
//Abstract class can have abstract and non abstract method
//Abstract class doesnt support multiple inheritence
//Abstract class can have final, non final, static and non static
//Abstract class can provide the implementation of interface
//Abstract class can have members like private and protected etc.


// abstract class Demo{
//   
// }
// class Ex{
//     public static void main(String[] args) {
//         Demo obj=new Demo();    //you cant create object of abstract class
//     }
// }


// abstract class Demo{
//     void msg1(){
//
//     }
//     abstract void msg2();   //Abstract method is declared without implementation
// }


// class A{
//
// }
// class B{
//
// }
// abstract class Demo extends A,B{
//
// }
//Abstract class cant support multiple inheritence(multiple class and single child)



// abstract class Demo(
//     final int x=10;
//     int y=20;
//     static int z=30;
// )



// interface A{
//
// }
// abstract class Demo implements A{
//
// }



// interface A {
//
// }
// interface B{
//
// }
// abstract class Demo implements A,B{
//
// }




// abstract class Demo{
//     private int x;
//     protected int y;
//     int m;      //default
//     public int z;
// }



// class A11{
//     int x=10;       //instance variable
// }
// class Demo{
//     public static void main(String[] args) {
//         A11 obj=new A11();
//         System.out.println(obj.x);
//     }
// }
//
//
//OR
//
//
// class A11{
//     static int x;
// }
// class Demo extends A11{
//     void chk()
//     {
//         x=5;
//     }
//     public static void main(String[] args) {
//         Demo obj=new Demo();
//         obj.chk();
//     }
// }


// abstract class Gun{
//     int ak47;
// }
// class Army{
//
// }
// class Police{
//
// }
// class Student{
//
// }



// final abstract class Demo{          //We cant do final abstract
//     int ak47;
//     abstract void msg();
// }
// //Error



// abstract class Gun{
//     abstract void use();
// }
// class Army extends Gun{
//     void use(){
//         System.out.println("Army using GUN");
//     }
//     public static void main(String[] args) {
//         Army obj=new Army();
//         obj.use();
//     }
// }




// vehicle
//     start
// bike=kick
// car=key
// ev=switch
abstract class vehicle{
    abstract void start();
}
class bike extends vehicle{
    void start(){
        System.out.println("Kick");
    }
}
class car extends vehicle{
    void start(){
        System.out.println("Key");
    }
}
class EV extends vehicle{
    void start(){
        System.out.println("Switch");
    }
}
class Ex{
    public static void main(String[] args) {
        bike b=new bike();
        b.start();
        car c=new car();
        c.start();
        EV e=new EV();
        e.start();
    }
}