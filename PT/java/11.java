// Final:
// Final is a non access Modifiers applicable only to a variable method or a class

// Final variable = to create constant var

// Final method = to prevent method overriding
// (You cannot create same method in child)

// Final class = prevent inheritance
// (you cannot create child class)

// Final var:
// When a variable is declared as final, it means that its value cannot be changed.

// Final Instance Variable:
// class Ex{
//     final int x;
// }

// Final Static Variable:
// class Ex{
//     final static int x;
// }

// Final Local variable:
// class Ex{
//     void fun(){
//         final int x;
//     }
// }

// Blank final variable:
// A variable that is declared as final but not initializedis called a blank final variable.
// Ex. final int x
//
// At the time of declaration in initialization block in constructor
//
// The final variable can be assigned only once.

// class Ex{
//     final int x;
//     public static void main(String[] args) {
//         System.out.println(x);
//     }
// }
//Error


// class Ex{
//     final int x;
//     public static void main(String[] args) {
//         Ex obj=new Ex();
//         obj.x=9;
//         System.out.println(obj.x);
//     }
// }
//Error


// class Ex{
//     final int x=10;
//     public static void main(String[] args) {
//         Ex obj=new Ex();
//         System.out.println(obj.x);
//     }
// }
//10


// class Ex{
//     final int x=10;
//     public static void main(String[] args) {
//         Ex obj=new Ex();
//         obj.x++;    //the final variable can be assigned value only once
//         System.out.println(obj.x);
//     }
// }
//Error


// class Ex{
//     final int x;
//     {
//         x=4; //initializing value in initialization block.
//     }
//     public static void main(String[] args) {
//         Ex obj=new Ex();
//         System.out.println(obj.x);
//     }
// }
//4


// class Ex{
//     final int x;
//     Ex()
//     {
//         x=4; //initializng valur from constructor
//     }
//     public static void main(String[] args) {
//         Ex obj=new Ex();
//         System.out.println(obj.x);
//     }
// }
//4


// class Ex{
//     final int x=10;
//     Ex(){
//         x=4;    //The final var can be assigned value only once
//     }
//     public static void main(String[] args) {
//         Ex obj=new Ex();
//         System.out.println(obj.x);
//     }
// }
//Error


// class Ex{
//     final int x;
//     Ex(){
//         x=4;
//     }
//     Ex(int a){
//         x=a;
//     }
//     public static void main(String[] args) {
//         Ex obj=new Ex(5);
//         System.out.println(obj.x);
//     }
// }
//5

// class Ex{
//     final int x;
//     Ex(){
//         x=4;
//     }
//     Ex(int a){
//         this();
//         x=a;
//     }
//     public static void main(String[] args) {
//         Ex obj=new Ex(5);
//         System.out.println(obj.x);
//     }
// }
//Error


// class Ex{
//     static final int x=5;
//     public static void main(String[] args) {
//         System.out.println(x);
//     }
// }
//6


// class Ex{
//     static final int x=5;
//     public static void main(String[] args) {
//         x++;
//         System.out.println(x);
//     }
// }
//Error


// class Ex{
//     static final int x;
//     Ex(){
//         x=3;
//     }
//     public static void main(String[] args) {
//         System.out.println(x);
//     }
// }
//Error


// class Ex{
//     static final int x;
//     static{
//         x=3;
//     }
//     public static void main(String[] args) {
//         System.out.println(x);
//     }
// }
//3


// final local variable:

// class Ex{
//     public static void main(String[] args) {
//         final int x=5;
//         x=10;  //The final variable can be assigned value only once
//         System.out.println(x);
//     }
// }
//Error


// class Ex{
//     public static void main(String[] args) {
//         final int x;
//         x=10;
//         System.out.println(x);
//     }
// }
//10



// final class A{
//     System.out.println("h");
// }
// class Ex extends A{
//     public static void main(String[] args) {
//         System.out.println("h");
//     }
// }
//Error



// final class A{
//     void msg(){
//         System.out.println("Hello Students");
//     }
// }
// class Ex extends A{
//     public static void main(String[] args) {
//         A obj=new A();
//         obj.msg();
//     }
// }
//Error


// class A11{
//     void msg(){
//         System.out.println("Hello Students");
//     }
// }
// class Ex extends A11{
//     public static void main(String[] args) {
//         A11 obj=new A11();
//         obj.msg();
//     }
// }
//Hello Students


class A{
    final void msg(){
        System.out.println("Hello");
    }   
}
class B extends A{
    void msg(){
        System.out.println("Hello Students");
    }
}