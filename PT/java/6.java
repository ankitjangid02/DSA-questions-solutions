// static initialization block.
// instance initialization block.
// static initialization block run once, when the class is first loaded.
// instance initialization block run every time a new instance is created.
// they run after all super constructor and before the constructor code has run.
// if multiple init block exits in a class, they run in the order in which they appear in the source file.


// instance initialization block
// class A2{
//     {
//         System.out.println("Hello");
//     }
//     A2(){
//         System.out.println("Hello Student");
//     }
//     public static void main(String[] args) {
//         A2 obj=new A2();
//     }
// }
// Hello
// Hello Student


// class A2{
//     {
//         System.out.println("Hello");
//     }
//     A2(){
//         System.out.println("Hello Student");
//     }
//     public static void main(String[] args) {
//         A2 obj=new A2();
//         A2 obj2=new A2();
//     }
// }
// Hello
// Hello Student
// Hello
// Hello Student


// class A2{
//     {
//         System.out.println("Hello");
//     }
//     {
//         System.out.println("Bye");
//     }
//     A2(){
//         System.out.println("Hello Student");
//     }
//     public static void main(String[] args) {
//         A2 obj=new A2();
//     }
// }
// Hello
// Bye
// Hello Student


// class A2{
//     A2(){
//         System.out.println("Parent");
//     }
// }
// class Exaa extends A2{
//     {
//         System.out.println("Hello");
//     }
//     {
//         System.out.println("Hii");
//     }
//     Exaa(){
//         System.out.println("Hello Student");
//     }
//     public static void main(String[] args) {
//         Exaa obj=new Exaa();
//     }
// }
// Parent
// Hello
// Hii
// Hello Student


// class Exaa{
//     Exaa(){
//         System.out.println("One");
//         System.out.println("Two");
//         System.out.println("Three");
//         System.out.println("Four");
//         System.out.println("Five");
//         System.out.println("Hello i'm default constructor");
//     }
//     Exaa(int x){
//         System.out.println("One");
//         System.out.println("Two");
//         System.out.println("Three");
//         System.out.println("Four");
//         System.out.println("Five");
//         System.out.println("Hello");
//     }
//     public static void main(String[] args) {
//         Exaa obj=new Exaa();
//     }
// }
// One
// Two
// Three
// Four
// Five
// Hello i'm default constructor



// class Exaa{
//     {
//         System.out.println("One");
//         System.out.println("Two");
//         System.out.println("Three");
//         System.out.println("Four");
//         System.out.println("Five");
//     }
//     Exaa(){
//         System.out.println("Hello i'm default constructor");
//     }
//     Exaa(int x){
//         System.out.println("Hello i'm parameterized constructor");
//     }
//     public static void main(String[] args) {
//         Exaa obj=new Exaa();
//     }
// }
// One
// Two
// Three
// Four
// Five
// Hello i'm default constructor


// class Exaa{
//     {
//         System.out.println("One");
//         System.out.println("Two");
//         System.out.println("Three");
//         System.out.println("Four");
//         System.out.println("Five");
//     }
//     Exaa(){
//         System.out.println("Hello i'm default constructor");
//     }
//     Exaa(int x){
//         System.out.println("Hello i'm parameterized constructor");
//     }
//     public static void main(String[] args) {
//         Exaa obj=new Exaa(5);
//     }
// }
// One
// Two
// Three
// Four
// Five
// Hello i'm parameterized constructor

// static(in it the initialize block calls one time only)
// class Exaa{
//     static{
//         System.out.println("Hello");
//     }
//     public static void main(String[] args) {
//         Exaa obj=new Exaa();
//         Exaa obj1=new Exaa();
//     }
// }
// Hello


// class A2{
//     static{
//         System.out.println("Hello");
//     }
// }
// class B2{
//     public static void main(String[] args) {
//         System.out.println("Hii");
//     }
// }
// Hii


// class A2{
//     static{
//         System.out.println("Hello");
//     }
// }
// class B2 extends A2{
//     public static void main(String[] args) {
//         A2 obj=new A2();
//         A2 obj1=new A2();
//     }
// }
// Hello


// class A2{
//     static{
//         System.out.println("Hello");
//     }
// }
// class B2 extends A2{
//     static{
//         System.out.println("Hello Student");
//     }
// }
// class Exaa{
//     public static void main(String[] args) {
//         B2 obj=new B2();
//     }
// }
// Hello 
// Hello Student


// static = single copy exits through out the program
// class Student{
//     int roll;
//     String name;
//     static String college_name;
//     public static void main(String[] args) {
//         Student s1=new Student();
//         s1.college_name="nmims";
//         Student s2=new Student();
//         System.out.println(s2.college_name);
//     }
// }
// nmims


// class Student{
//     int roll;
//     String name;
//     static String college_name;
//     public static void main(String[] args) {
//         Student.college_name="nmims";
//         System.out.println(Student.college_name);
//     }
// }
// nmims


class Student{
    int roll;
    String name;
    static String college_name;
    public Student(int r, String name){
        roll=r;
        this.name=name;
    }
}
class Caller3{
    public static void main(String[] args) {
        Student s1=new Student(1,"John");
        Student s2=new Student(2, "Yash");
        System.out.println(s1.roll+" "+s1.name);
        System.out.println(s2.roll+" "+s2.name);
        System.out.println(Student.college_name);
    }
}
// 1 John
// 2 Yash
// null