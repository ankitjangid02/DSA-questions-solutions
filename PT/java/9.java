// class EEx{
//     public static void main(String[] args) {
//         Boolean z;
//         Integer a=new Integer("5");
//         Integer b=5;
//         z=a.equals(b);
//         System.out.println(z);
//         System.out.println(a.equals(b));
//     }
// }


// class EEx{
//     public static void main(String[] args) {
//         Integer a=100;
//         Integer b=100;
//         System.out.println(a==b);    //same reference
//         System.out.println(a.equals(b)); //same value
//     }
// }


// class EEx{
//     public static void main(String[] args) {
//         Integer a=200;  //-128 to 127 range values can be cached by Integer class
//         Integer b=200;
//         System.out.println(a==b);    
//         System.out.println(a.equals(b)); 
//     }
// }
//false
//true





// wrapper         cache
// Byte            Full range

// Short
// Integer         -128 to 127
// Long

// Character       0 to 127
// Boolean         false and true
// Float/Double    ---------


// class EEx{
//     public static void main(String[] args) {
//         Integer x=new Integer("6");
//         Float y=new Float("3.1");
//         System.out.println(x+y);
//     }
// }


// class EEx{
//     public static void main(String[] args) {
//         Integer a=Integer.valueOf("15");
//         System.out.println(Integer.toHexString(a));
//     }
// }


// class Bytes{
//     public static void main(String[] args) {
//         System.out.println(Byte.MAX_VALUE); //127
//         System.out.println(Byte.MIN_VALUE); //-128
//     }
// }


// class ByteDemo{
//     public static void main(String[] args) {
//         Byte b=Byte.valueOf("10");
//         byte x=b;
//         System.out.println(x);
//     }
// }



// class Float1{
//     public static void main(String[] args) {
//         Float f=Float.valueOf("3.14");
//         float x=f;
//         System.out.println(x);
//     }
// }

// class Double1{
//     public static void main(String[] args) {
//         Double d=Double.valueOf("3.147");
//         double x=d;
//         System.out.println(x);
//     }
// }

// class Short1{
//     public static void main(String[] args) {
//         Short s=Short.valueOf("123");
//         short x=s;
//          System.out.println(x);
//     }
// }

// class Long1{
//     public static void main(String[] args) {
//         Long l=Long.valueOf("123456789");
//         long x=l;
//         System.out.println(x);
//     }
// }

// class Character1{
//     public static void main(String[] args) {
//         Character c=Character.valueOf('A');
//         char x=c;
//         System.out.println(x);
//     }
// }

// class Boolean1{
//     public static void main(String[] args) {
//         Boolean b=Boolean.valueOf("true");
//         boolean x=b;
//         System.out.println(x);
//     }
// }