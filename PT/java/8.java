// wrapper class

// class EEx{
//     public static void main(String[] args) {
//         int i=10;   //int = primitive(predefind data type)
//         Integer x= Integer.valueOf(i);  // Boxing
//         // Integer = wrapper class
//         // Primitive -> Object wrapper class
//         System.out.println(x);
//         Integer y=Integer.valueOf("123");
//         System.out.println(y);
//     }
// }


//auto boxing
// class EEx{
//     public static void main(String[] args) {
//         int i=10;
//         Integer x=i; //Auto Boxing
//         System.out.println(x);
//     }
// }


//unboxing
// class EEx{
//     public static void main(String[] args) {
//         Integer x=Integer.valueOf(123);
//         System.out.println(x);
//         int i=x.intValue(); //Unboxing
//         System.out.println(i);

//         Integer y=Integer.valueOf(123);
//         int j=y; //Auto Unboxing
//         System.out.println(j);
//     }
// }


// class EEx{
//     public static void main(String[] args) {
//         Integer x=34;
//         System.out.println(x);

//         // Integer y="34"; //Error

//         Integer y=Integer.valueOf("123");
//         System.out.println(y);
//     }
// }


//Radix
// class EEx{
//     public static void main(String[] args) {
//         Integer i= Integer.valueOf("1010",2); //Binary
//         System.out.println(i);
//     }
// }


// class EEx{
//     public static void main(String[] args) {
//         Boolean b1=new Boolean(true);   //Boolean is depreciated(its going to end soon so we can't use it later)
//         Boolean b2=new Boolean(true);
//         System.out.println(b1.equals(b2));

//         Boolean b3=Boolean.valueOf(true);   //We can use Boolean like this
//         Boolean b4=Boolean.valueOf(true);
//         System.out.println(b3.equals(b4));
        
//         Boolean b5=Boolean.valueOf(true);
//         Boolean b6=Boolean.valueOf("TRUE");
//         System.out.println(b5.equals(b6));

//         Boolean b7=Boolean.valueOf("welcome");  //false
//         Boolean b8=Boolean.valueOf("hello");    //false
//         System.out.println(b7);
//         System.out.println(b8);
//         System.out.println(b7.equals(b8));  //false==false => true
//     }
// }


// class EEx{
//     public static void main(String[] args) {
//         Integer a=new Integer("5");
//         Integer b=5;
//         System.out.println(a.compareTo(b));
//     }
// }