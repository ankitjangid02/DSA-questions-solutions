// // class Test{
// //     public static void main(String[] args) {
// //         String s1="   Hello   ";
// //         System.out.println(s1.trim());
// //     }
// // }
// //Hello



// // class Test{
// //     public static void main(String[] args) {
// //         String s1="Hello Student";
// //         System.out.println(s1.toLowerCase());
// //         System.out.println(s1.toUpperCase());
// //     }
// // }
// // hello student
// // HELLO STUDENT


// // class Test{
// //     public static void main(String[] args) {
// //         System.out.println("10"+"20");
// //     }
// // }
// // 1020

// // class Test{
// //     public static void main(String[] args) {
// //         int x=20,y=30;
// //         System.out.println(x+y);
// //     }
// // }
// // 50


// // class Test{
// //     public static void main(String[] args) {
// //         int x=20,y=30;
// //         System.out.println(String.valueOf(x)+String.valueOf(y));
// //     }
// // }
// // 2030



// // class Test{
// //     public static void main(String[] args) {
// //         String s1="Gaurav";
// //         s1=s1.replace("G","S");
// //         System.out.println(s1);
// //     }
// // }
// // Saurav


// // class Test{
// //     public static void main(String[] args) {
// //         String s1="Gaurav";
// //         s1=s1.replace("av","i");
// //         System.out.println(s1);
// //     }
// // }
// // Gauri


// // class Test{
// //     public static void main(String[] args) {
// //         String s1="Hello Gaurav how are you";
// //         System.out.println(s1.contains("Gaurav"));
// //         System.out.println(s1.contains("how are"));
// //         System.out.println(s1.contains("How are"));
// //         System.out.println(s1.contains("how you"));
// //         System.out.println(s1.contains("gaurav"));
// //         System.out.println(s1.toLowerCase().contains("gaurav"));
// //     }
// // }
// // true
// // true
// // false
// // false
// // false
// // true


// // class Test{
// //     public static void main(String[] args) {
// //         String s1="Hello Gaurav";
// //         System.out.println(s1.endsWith("av"));
// //         System.out.println(s1.endsWith("rav"));
// //         System.out.println(s1.endsWith("gauxrav"));
// //         System.out.println(s1.toLowerCase().endsWith("gaurav"));
// //     }
// // }
// // true
// // true
// // false
// // true


// // class Test{
// //     public static void main(String[] args) {
// //         String s1="hello Gaurav";
// //         System.out.println(s1.charAt(0));
// //     }
// // }
// //h


// // class Test{
// //     public static void main(String[] args) {
// //         String s1="hello Gaurav";
// //         char[] ch=s1.toCharArray();
// //         for(char c:ch)
// //             System.out.print(c+" ");
// //     }
// // }
// // h e l l o  G a u r a v


// // class testing{
// //     public static void main(String[] args) {
// //         String s1="abcdefgh ihjklmno";
// //         char[] ch=s1.toCharArray();
// //         System.out.println(ch[1]);
// //     }
// // }
// // b


// // class Test{
// //     public static void main(String[] args) {
// //         char c='A';
// //         System.out.println((int)c);
// //     }
// // }
// // 65


// // class Test{
// //     public static void main(String[] args) {
// //         String s1="ABC", s2="abc";
// //         System.out.println(s1.equals(s2));
// //         System.out.println(s1.equalsIgnoreCase(s2));
// //     }
// // }
// // false 
// // true


// // class Test{
// //     public static void main(String[] args) {
// //         String s1="ABC", s2="abc";
// //         System.out.println(s1.charAt(0));
// //         System.out.println(s1.codePointAt(0));

// //     }
// // }
// // A
// //   65


// // class Test{
// //     public static void main(String[] args) {
// //         String s1="ABCDEF";
// //         int a=s1.length();
// //         for(int i=a-1; i>=0; i--){
// //             System.out.print(s1.charAt(i));
// //         }
// //     }
// // }
// // FEDCBA









// //PALINDROME
// // class Test{
// //     public static void main(String[] args) {
// //         String s1="AbbAb";
// //         String s2="abbcdcbba";
// //         int a=0;
// //         for(int i=0; i<s1.length(); i++){
// //             if(s1.charAt(i)==s1.charAt(s1.length()-1-i)){
// //                 a++;
// //             }
// //             else{
// //                 a--;
// //             }
// //         }
// //         if(a==s1.length()){
// //             System.out.println("Palindrome");
// //         }
// //         else{
// //             System.out.println("Not Palindrome");
// //         }
// //     }
// // }











// //CONSTRUCTOR
// // class Coders{
// //     Coders(){
// //     System.out.println("Hello Student");
// //     }
// // }
// // class Test{
// //     public static void main(String[] args) {
// //         Coders c=new Coders();
// //         Coders c1=new Coders();
// //     }
// // }
// // Hello Student
// // Hello Student


// // class Coders{
// //     Coders(){
// //         System.out.println("Hello Student");
// //     }
// //     public static void main(String[] args) {
// //         Coders c=new Coders();
// //     }
// // }
// // Hello Student


// // class Coders{
// //     Coders(){
// //         System.out.println("Hello Student");
// //     }
// //     public static void main(String[] args) {
// //         new Coders();
// //     }
// // }
// // Hello Student


// // class Coders{
// //     Coders(){
// //         System.out.println("Hello");
// //     }
// //     Coders(int x){
// //         System.out.println("Hello Student no."+x);
// //     }   
// // }
// // class Test{
// //     public static void main(String[] args) {
// //         Coders c=new Coders();
// //         Coders c1=new Coders(10);
// //     }
// // }
// // Hello
// // Hello Student no.10



// class Student{
//     String a;
//     int b;
//     void acceptData(String name, int rollno){
//         a=name;
//         b=rollno;
//     }
//     void show(){
//         System.out.println("Name: "+a);
//         System.out.println("Roll No: "+b);
//     }
// }
// class Test{
//     public static void main(String[] args) {
//         Student s=new Student();
//         s.acceptData("Gauuurav", 10);
//         s.show();
//     }
// }
// Name: Gauuurav
// Roll No: 10


// class Student{
//     Student(String name, int rollno){
//         System.out.print(name+" - ");
//         System.out.println(rollno);
//     }
// }
// class Test{
//     public static void main(String[] args) {
//         Student s=new Student("Ankit", 21);
//     }
// }
// Ankit - 21



// class Student{
//     private void msg(){
//         System.out.println("Hello");
//     }
// }
// class caller{
//     public static void main(String[] args) {
//         Student s=new Student();
//         s.msg();
//     }
// }




// class Student{
//     public void msg(){
//         System.out.println("Hello");
//     }
//     public static void main(String[] args) {
//         Student s=new Student();
//         s.msg();
//     }
// }




// class Student{
//     Student(){
//         System.out.println("Hello");
//     }
// }
// class caller{
//     public static void main(String[] args) {
//         Student s=new Student();
//     }
// }



// class A{
//     A(){
//         System.out.println("I'm from A class");
//     }
//     A(int x){
//         System.out.println("I'm from A class with parameter "+x);
//     }
// }


// class B extends A{
//     B(){
//         System.out.print("I'm from B class");
//     }
// }
// class Caller{
//     public static void main(String[] args) {
//         B obj=new B();
//     }
// }
//I'm from A class
//I'm from B class




class A{
    A(){
        System.out.println("I'm from A class");
    }
    A(int x){
        System.out.println("I'm from A class with parameter "+x);
    }
}

class B extends A{
    B(){
        super(3);
        System.out.print("I'm from B class");
    }
}
class Caller{
    public static void main(String[] args) {
        B obj=new B();
    }
}
//I'm from A class with parameter 3
//I'm from B class