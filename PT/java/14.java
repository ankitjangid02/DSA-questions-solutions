//interface
//by default method public abstract
//variable public static final



// interface A{
//     int x=10;      //public static final
// }
//we dont create an object of interface



// interface A
// {
//     void show();
// }
// class B implements A{
//     public void show(){
//         System.out.println("Hello");
//     }
// }


//abstract class provides partial abstraction = abstract method + concrete method
//but interface provides full abstraction



// interface I1{
//     int x=50;   //public static final
// }
// class Examp{
//     public static void main(String[] args) {
//         System.out.println(I1.x);
//     }
// }
//
//50
//static method can call from static method


// interface I1{
//     int x=50;
// }
// class Examp implements I1{
//     //x is public static final so we can call it from Examp
//     public static void main(String[] args) {
//         System.out.println(Examp.x);
//     }
// }



// interface I1{
//     int x=50;
// }
// class Examp implements I1{
//     public static void main(String[] args) {
//         System.out.println(x);
//     }
// }
//we can call x when we inherit it(when we use implements)




// interface I1{
//     int x=50;
// }
// class Examp implements I1{
//     public static void main(String[] args) {
//         I1 obj=new Examp();
//         System.out.println(obj.x);
//     }
// }
//we can also call x with making the object of it




// interface A1234{
//     void show();
// }
// interface B1234{
//     void display();
// }
// class C implements A1234,B1234{
//     public void show(){
//         System.out.println("Show method");
//     }
//     public void display(){
//         System.out.println("Display method");
//     }
//     public static void main(String[] args) {
//         C obj=new C();
//         obj.show();
//         obj.display();
//     }
// }




// interface I1{
//     default void fun(){
//         System.out.println("Hello");
//     }
// }
// class Examp implements I1{
//     public static void main(String[] args) {
//         Examp obj=new Examp();
//         obj.fun();
//     }
// }
//Hello
//default method is used to provide the implementation of method in interface



// interface I1{
//     private void fun(){
//         System.out.println("100 line code");
//     }
//     default void msg(){
//         System.out.println("one");
//         fun();
//         System.out.println("two");
//         fun();
//     }
// }
// class Examp implements I1{
//     public static void main(String[] args) {
//         I1 obj=new Examp();
//         obj.msg();
//     }
// }
// one
// 100 line code
// two
// 100 line code




// interface A66{
//     static void msg(){
//         System.out.println("Hello I'm static");
//     }
// }
// class Demo{
//     public static void main(String[] args) {
//         A66.msg();
//     }
// }




//check if 2 strings are anagrams
//convert Roman to integer