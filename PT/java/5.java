// This in java
// class Exa{
//     int a;
//     void acp(int x){
//         a=x;

//     }
//     void dsp(){
//         System.out.println("A is: "+a);
//     }
//     public static void main(String[] args) {
//         Exa obj=new Exa();
//         obj.acp(5);
//         obj.dsp();
//     }
// }
// A is: 5

// class Exa{
//     int a;
//     void acp(int a){
//         a=a;

//     }
//     void dsp(){
//         System.out.println("A is: "+a);
//     }
//     public static void main(String[] args) {
//         Exa obj=new Exa();
//         obj.acp(5);
//         obj.dsp();
//     }
// }
// A is: 0


// class Exa{
//     int a;
//     void acp(int a){
//         this.a=a;

//     }
//     void dsp(){
//         System.out.println("A is: "+a);
//     }
//     public static void main(String[] args) {
//         Exa obj=new Exa();
//         obj.acp(5);
//         obj.dsp();
//     }
// }
// A is: 5

// default values of instance variable
// int -0
// floar -0.0f
// string - Null
// Boolean -False
// char -blank
// double -0.0d



// class Exa{
//     void fun(){
//         System.out.println("Hello A class");
//     }
// }
// class EX2 extends Exa{
//     void fun(){
//         System.out.println("Hello Ex2 class ");
//     }
//     public static void main(String[] args) {
//         EX2 obj=new EX2();
//         obj.fun();
//     }
// }
// Hello Ex2 class


// class Exa{
//     void fun(){
//         System.out.println("Hello A class");
//     }
// }
// class EX2 extends Exa{
//     void fun(){
//         super.fun();
//         System.out.println("Hello Ex2 class ");
//     }
//     public static void main(String[] args) {
//         EX2 obj=new EX2();
//         obj.fun();
//     }
// }
// Hello A class
// Hello Ex2 class


// class Exa{
//     void fun(){
//         System.out.println("Hello A class");
//     }
// }
// class EX2 extends Exa{
//     void fun(){
//         System.out.println("Hello Ex2 class ");
//         super.fun();
//     }
//     public static void main(String[] args) {
//         EX2 obj=new EX2();
//         obj.fun();
//     }
// }
// Hello Ex2 class
// Hello A class


// class Exa{
//     int x=5;
//     void fun(){
//         int x=10;
//         System.out.println("Value of parent x is:"+this.x);//5
//         System.out.println("Value of parent x is:"+x);//10
//     }
// }
// class abc extends Exa{
//     int x=15;
//     void fun(){
//         int x=20;
//         System.out.println("Value of child x is:"+this.x);//15
//         super.fun();
//         System.out.println("Value of child x is:"+this.x);//15
//         System.out.println("Value of child x is:"+x);//20
//     }
//     public static void main(String[] args) {
//         abc obj=new abc();
//         obj.fun();
//     }
// }
// Value of child x is:15
// Value of parent x is:5
// Value of parent x is:10
// Value of child x is:15
// Value of child x is:20


// child class constructor first responsiblity is call parent
// default constructor
// class Exa{
//     Exa(){
//         System.out.println("C1");
//     }
//     Exa(int x){
//         System.out.println("C2");
//     }
// }
// Class Exa2 extends Exa{
//     Exa2(){
//         System.out.println("C3");
//     }
//     public static void main(String[] args) {
//         Exa2 obj=new Exa2();
//     }
// }